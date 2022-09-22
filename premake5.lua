workspace "Drogen"

    startproject "DroneLand"

    configurations 
    {
        "Debug",
        "Release"
    }

    outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"


    platforms { "Win64" }

    filter { "platforms:Win64" }
        system "Windows"
        architecture "x86_64"
        defines "DWin64"

project "DroGen"
        kind "StaticLib"
        language "C++"
        staticruntime "off"
    
        targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
        objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")
    
        files
        {
            "DroGen/**.h",
            "DroGen/**.cpp"
        }
    
        includedirs
        {
            "%{wks.location}/DroGen/dependencies/fmt/include/",
            "%{wks.location}/DroGen/dependencies/glfw/include/",
            "%{wks.location}/DroGen/src/"
        }
    
        location "%{wks.location}/DroGen"
    
        links 
        {
            "fmt",
            "glfw"
        }
    
    
        filter { "configurations:Debug" }
            defines { "DDEBGUG" }
            runtime "Debug"
            symbols "On"
    
        filter { "configurations:Release" }
            defines { "DRELEASE" }
            runtime "Release"
            optimize "On"
    
project "DroneLand"
    kind "ConsoleApp"
    language "C++"
        
    targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
    objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")
        
    files
    {
        "%{prj.name}/**.h",
        "%{prj.name}/**.cpp"
    }
        
    includedirs
    {
        "%{wks.location}/DroGen/dependencies/fmt/include/",
        "%{wks.location}/DroGen/dependencies/glfw/include/",
        "%{wks.location}/DroGen/src",
    }
        
    location "%{wks.location}/DroneLand"
        
    links 
    { 
        "DroGen"
    }
        
    filter { "configurations:Debug" }  
        defines { "DDEBGUG" }
        runtime "Debug"
        symbols "On"
        
    filter { "configurations:Release" }
        defines { "DRELEASE" }
        runtime "Release"
        optimize "On"
        
include "DroGen/dependencies/fmt"
include "Drogen/dependencies/glfw"