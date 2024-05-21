@ECHO off
SET CFLAGS = -std=c++17 -O2
SET LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
@REM g++ -std=c++17 -O2 src/main.cpp -o ./src/BuildGame -lglfw -I "D:\prograns\GLFW\glfw-3.4\include" -lvulkan -I "D:\prograns\VulkanSDK\1.3.283.0\Include" -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
echo building...
g++ -std=c++17 -O2 src/main.cpp -o ./src/BuildGamegcc -I C:/msys64/mingw64/include/ C:/msys64/mingw64/lib/libglfw3.dll.a -I C:/msys64/mingw64/include/vulkan/ -lpthread
@REM del "./src/BuildGame.exe"
@REM -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr