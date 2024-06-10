# SFML

LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
.PHONY: ClearBuildGame

BuildGame: src/main.cpp
	echo "building...\n"
	g++ src/main.cpp src/.cpp src/map/.cpp  src/entity/.cpp  src/entity/buff/.cpp src/entity/behavior/.cpp src/item/.cpp src/inventory/.cpp src/random/.cpp src/app/*.cpp -o ./build/BuildGame $(LDFLAGS)
	./build/BuildGame	

ClearBuildGame: src/main.cpp
	@clear
	@echo "building...\n"
	g++ $$(find . -type f -iregex ".*.cpp") -o ./build/BuildGame $(LDFLAGS)
	@./build/BuildGame

# g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system