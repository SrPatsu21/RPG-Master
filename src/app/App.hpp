#ifndef APP_HPP
#define APP_HPP

#include <SFML/Graphics.hpp>
//todo fix this include, uncommented result error
// #include "../global.hpp"

#include "../map/MapRender.hpp"

//todo only for "debug"
#include <iostream>

class App {
   private:
    sf::RenderWindow window;
    sf::View view;
    MapRender mapRender;
    
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