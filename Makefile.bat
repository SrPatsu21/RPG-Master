@ECHO off
@REM SET CFLAGS = -std=c++17 -O2
@REM SET LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
@REM -I./external_library/glfw-3.4.bin.WIN64/include ./external_library/glfw-3.4.bin.WIN64/lib-mingw-w64/* 
./external_library/VulkanSKD-1.3.283.0/Lib/cmake/*
@REM -I./external_library/glm-1.0.1-light/glm
@REM -I./external_library/VulkanSKD-1.3.283.0/Include ./external_library/VulkanSKD-1.3.283.0/Lib/*
echo building...
g++ -std=c++17 -O2 src/main.cpp -o ./build/BuildGame -I./ -I./external_library/VulkanSKD-1.3.283.0/Include ./external_library/VulkanSKD-1.3.283.0/Lib/* -I./external_library/glm-1.0.1-light/glm -I./external_library/glfw-3.4.bin.WIN64/include ./external_library/glfw-3.4.bin.WIN64/lib-mingw-w64/*
.\build\BuildGame.exe
@REM del "./src/BuildGame.exe"