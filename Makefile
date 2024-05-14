CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

BuildGame: src/main.cpp
	echo "building\n"
	g++ $(CFLAGS) src/main.cpp -o ./src/BuildGame $(LDFLAGS)
	./src/BuildGame
	rm -f ./src/BuildGame