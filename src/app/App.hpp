#ifndef APP_HPP
#define APP_HPP

#include <SFML/Graphics.hpp>

//* app consts
unsigned int WIN_SIZE_X = 1280;
unsigned int WIN_SIZE_Y = 720;

//todo only for "debuf"
#include <iostream>

class App {
   private:
    sf::RenderWindow window;
    void initWindow();
    void processEvents();
    void update(sf::Time deltaTime);
    void render();
    void cleanup();

   public:
    App();
    ~App();
    void run();
};

#endif