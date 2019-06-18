module Nodejs
  module Npm
    extend self
    NPM_PATH = "#{Nodejs.home_dir}/bin/npm"

    def init : Bool
      system("cd #{Nodejs.home_dir}/js && #{NPM_PATH} init --yes")
    end

    def is_installed?(package_name : String) : Bool
      system("cd #{Nodejs.home_dir}/js && #{NPM_PATH} ls #{package_name} | grep #{package_name}")
    end

    def install(package_name : String = "") : Bool
      if package_name.empty?
        system("cd #{Nodejs.home_dir}/js && #{NPM_PATH} i")
      else
        system("cd #{Nodejs.home_dir}/js && #{NPM_PATH} i #{package_name}")
      end
    end

    def uninstall(package_name : String) : Bool
      system("cd #{Nodejs.home_dir}/js && #{NPM_PATH} un #{package_name}")
    end
  end
end
