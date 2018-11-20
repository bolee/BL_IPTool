
Pod::Spec.new do |s|

  s.name         = "BL_IPTool"
  s.version      = "0.0.1"
  s.summary      = "A simple library for iOS to use for getting IP Address."
  s.homepage     = "https://github.com/bolee/BL_IPTool"
  s.license      = "MIT"
  s.author       = { "bolee" => "cn.bobolee.org@gmail.com" }
  s.platform     = :ios
  s.source       = { :git => "https://github.com/bolee/BL_IPTool.git", :tag => s.version}
  s.source_files = "IPTool/*.{h,m}"
  s.requires_arc = true

end
