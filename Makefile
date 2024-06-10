# SFML

LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
.PHONY: ClearBuildGame

BuildGame: src/main.cpp
	echo "building...\n"
	g++ src/main.cpp -o ./build/BuildGame $(LDFLAGS)
	./build/BuildGame	

ClearBuildGame: src/main.cpp
	@clear
	@echo "building...\n"
	@g++ src/main.cpp -o ./build/BuildGame $(LDFLAGS)
	@./build/BuildGame

# g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system