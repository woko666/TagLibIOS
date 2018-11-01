#
# Be sure to run `pod lib lint IosUtils.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TagLibIOS'
  s.version          = '1.0.0'
  s.summary          = 'Taglib'
  s.description      = 'Taglib for ios'

  s.homepage         = "https://github.com/woko666/TagLibIOS"
  s.author           = { 'woko' => 'woko@centrum.cz' }
  s.source           = { :git => "https://github.com/woko666/TagLibIOS.git" }

  s.ios.deployment_target = '11.0'
  s.swift_version = '4.2'

  s.xcconfig = {
    "SWIFT_INCLUDE_PATHS" => "$(PODS_ROOT)/TagLibIOS/TagLibIOS/taglib/toolkit",
    'HEADER_SEARCH_PATHS' => "$(PODS_ROOT)/TagLibIOS/TagLibIOS/taglib/toolkit",
    "ENABLE_BITCODE" => "YES",
    "OTHER_LDFLAGS" => "-ObjC -all_load -lz -lstdc++"
  }

  s.source_files  = ["TagLibIOS/**/*.{c,cpp"]
  s.private_header_files  = ["TagLibIOS/**/*.{h,tcc}"]
  s.public_header_files  = ["TagLibIOS/TagLibIOS.h"]
end
