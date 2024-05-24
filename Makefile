CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
GLM = -I ./external_library/glm-1.0.1/glm

BuildGame: src/main.cpp
	echo "building\n"
	g++ $(CFLAGS) src/main.cpp -o ./build/BuildGame $(LDFLAGS)
	./build/BuildGame
#	rm -f ./build/BuildGame