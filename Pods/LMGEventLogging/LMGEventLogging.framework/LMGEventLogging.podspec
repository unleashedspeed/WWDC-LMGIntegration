#
# Be sure to run `pod lib lint LMGData.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LMGEventLogging'
  s.version          = '1.0.8'
  s.summary          = 'Event logging & analytics layer for the LMG iOS SDK'
  s.description      = <<-DESC
Implements the event logging objects for the LMG iOS SDK.
                       DESC

  s.homepage         = 'https://github.com/loopmediagroup/loopmediagroup-ios'
  s.license          = { :type => 'Copyright', :file => 'LICENSE' }
  s.author           = { 'Loop Media Group' => 'dev@loopmediagroup.com' }
  s.source           = { :http => 'https://github.com/loopmediagroup/loopmediagroup-ios/releases/download/EventLogging-v'+String(s.version)+'/LMGEventLogging.zip' }

  s.ios.deployment_target = '9.0'
  s.source_files = 'LMGEventLogging/**/*.{h,m,mm}'

  s.dependency 'LMGNotificationBus'
  s.dependency 'SnowplowTracker', '~> 0.9.0'
  
  # These are automatically exported in the umbrella.h
  s.public_header_files = [
    'LMGEventLogging/**/*.{h}'
  ]
  s.private_header_files = 'LMGEventLogging/VarLet4.h'
end
