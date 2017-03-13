includeexternal ("premake-vs-include.lua")

workspace "ooc-examples"
    language "C++"
    location "build/%{_ACTION}/%{wks.name}"    
    if _ACTION == "vs2015" then
        toolset "v140_xp"
    end

    

    group "ooc-examples"              
        matches = os.matchdirs("./*")
        for i = #matches, 1, -1 do           
            create_console_project(path.getname(matches[i]), "./")
        end


        matches = os.matchdirs("src/test*")
        for i = #matches, 1, -1 do           
            create_console_project(path.getname(matches[i]), "src")
        end