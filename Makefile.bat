@ECHO off
@REM -I./external_library/glfw-3.4.bin.WIN64/include ./external_library/glfw-3.4.bin.WIN64/lib-mingw-w64/* 
@REM -I./external_library/glm-1.0.1-light/glm
@REM -I./external_library/VulkanSKD-1.3.283.0/Include ./external_library/VulkanSKD-1.3.283.0/Lib/*.lib
echo building...
g++ -g -std=c++17 -O2 src/main.cpp -o ./build/BuildGame -I./external_library/VulkanSKD-1.3.283.0/Include ./external_library/VulkanSKD-1.3.283.0/Lib/*.lib -I./external_library/glm-1.0.1-light/glm -I./external_library/glfw-3.4.bin.WIN64/include ./external_library/glfw-3.4.bin.WIN64/lib-mingw-w64/libglfw3dll.a  ./external_library/glfw-3.4.bin.WIN64/lib-mingw-w64/glfw3.dll ./external_library/glfw-3.4.bin.WIN64/lib-static-ucrt/*
.\build\BuildGame.exe
@REM del "./src/BuildGame.exe"