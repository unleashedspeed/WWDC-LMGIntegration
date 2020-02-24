//
//  AppDelegate.swift
//  SFParties
//
//  Created by Genady Okrain on 4/30/16.
//  Copyright © 2016 Okrain. All rights reserved.
//

import UIKit
import Fabric
import Crashlytics
import Smooch
import OneSignal
import JLRoutes
import LMGUI

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate, UISplitViewControllerDelegate {
    var window: UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        // Keys
        let keys = SFPartiesKeys()

        // OneSignal
        OneSignal.initWithLaunchOptions(launchOptions, appId: keys.oneSignal, handleNotificationReceived: { notification in
            
        }, handleNotificationAction: { result in

        }, settings: [kOSSettingsKeyAutoPrompt: true, kOSSettingsKeyInFocusDisplayOption: OSNotificationDisplayType.notification.rawValue])

        // Smooch
        Smooch.initWith(SKTSettings(appId: keys.smooch))

        // Crashlytics
        Fabric.with([Crashlytics.start(withAPIKey: keys.crashlytics)])

        // Default time
        NSTimeZone.default = TimeZone(identifier: "PST")!

        // Global Tint Color (Xcode Bug #1)
        UIView.appearance().tintColor = UIColor(red: 106.0/255.0, green: 118.0/255.0, blue: 220.0/255.0, alpha: 1.0)

        // Routes
        RoutesManager.sharedInstance.setup()

        // Delegate
        if let splitViewController = UIStoryboard(name: "Main", bundle: nil).instantiateInitialViewController() as? UISplitViewController {
            splitViewController.delegate = self
            splitViewController.preferredDisplayMode = .allVisible
            window?.rootViewController = splitViewController
            window?.makeKeyAndVisible()
        }

        // LMG
        LMGClient.shared().setIntegrationKey("yTOICyJSVHfJwvj7gUQ2_8mIKDO89ZcHwI1M9H355sRgHAD0zNOcHbYhfFPb4f105WkTTpzxQ4itTcd2285XYcqoeFPjyRw-9bSyf9jl1GTC9A6dgDeOef5RDfI7HBTDqDRSYw9mw2N62SqlF1CX5Qvv2sYZJEu43HANmDMcy472EuY31sr3vyH-Jde-wVPS2HyT4U_HfKrPnsapuAo1sjXTrHtHGC4JdrMcl427zr41")
        
        return true
    }

    func application(_ app: UIApplication, open url: URL, options: [UIApplicationOpenURLOptionsKey : Any] = [:]) -> Bool {
        return JLRoutes.routeURL(url)
    }

    // MARK: UISplitViewControllerDelegate

    func splitViewController(_ splitViewController: UISplitViewController, collapseSecondary secondaryViewController: UIViewController, onto primaryViewController: UIViewController) -> Bool {
        if secondaryViewController.isKind(of: UINavigationController.self) {
            return false
        } else {
            return true
        }
    }

    func splitViewController(_ splitViewController: UISplitViewController, separateSecondaryFrom primaryViewController: UIViewController) -> UIViewController? {
        if primaryViewController.isKind(of: UINavigationController.self) {
            let nvc = primaryViewController as! UINavigationController
            if nvc.topViewController is PartiesTableViewController {
                return UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "noparty")
            }
        }

        return nil
    }
}

