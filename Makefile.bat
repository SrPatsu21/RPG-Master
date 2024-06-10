@ECHO off
@REM -I./external_library/glfw-3.4.bin.WIN64/include ./external_library/glfw-3.4.bin.WIN64/lib-mingw-w64/libglfw3dll.a  ./external_library/glfw-3.4.bin.WIN64/lib-mingw-w64/glfw3.dll ./external_library/glfw-3.4.bin.WIN64/lib-static-ucrt/*
@REM -I./external_library/glm-1.0.1-light/glm
@REM -I./external_library/VulkanSKD-1.3.283.0/Include ./external_library/VulkanSKD-1.3.283.0/Lib/*.lib
@REM -I./external_library/SFML-2.6.1/include/SFML/*.hpp ./external_library/SFML-2.6.1/lib/*
cls
@REM set "SFML = -l./external_library/SFML-2.6.1/include/SFML/Graphics.hpp -l./external_library/SFML-2.6.1/include/SFML/Window.hpp -l./external_library/SFML-2.6.1/include/SFML/System.hpp"
@REM set "SFMLF = -I./external_library/SFML-2.6.1/include/SFML/Graphics -I./external_library/SFML-2.6.1/include/SFML/System -I./external_library/SFML-2.6.1/include/SFML/Window ./external_library/SFML-2.6.1/bin"
@REM set "pathap = src/*.cpp src/map/*.cpp  src/entity/*.cpp  src/entity/buff/*.cpp src/entity/behavior/*.cpp src/item/*.cpp src/inventory/*.cpp src/random/*.cpp src/app/*.cpp"
echo building...
@REM g++ -std=c++17 -O2 "%pathap%" -o ./build/BuildGame "%SFMLF%" "%SFML%"
g++ src/*.cpp src/map/*.cpp  src/entity/*.cpp  src/entity/buff/*.cpp src/entity/behavior/*.cpp src/item/*.cpp src/inventory/*.cpp src/random/*.cpp src/app/*.cpp -o ./build/BuildGame ./external_library/SFML-2.6.1/bin/*
.\build\BuildGame.exe
@REM del "./src/BuildGame.exe" 

@REM -L./external_library/SFML-2.6.1/include/SFML/Graphics.hpp -L./external_library/SFML-2.6.1/include/SFML/Window.hpp -L./external_library/SFML-2.6.1/include/SFML/System.hpp
@REM ./external_library/SFML-2.6.1/bin/*