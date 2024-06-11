#ifndef ABSTRACTMOBRENDER_HPP
#define ABSTRACTMOBRENDER_HPP

#include <SFML/Graphics.hpp>
#include <string>
#include "./AbstractRender.hpp"

class AbstractMobRender : public AbstractRender {
    private:
    public:
        AbstractMobRender(std::string path);
        ~AbstractMobRender();
        void handleInput(sf::Keyboard::Key k, bool state);
        void updateSprite(sf::Time deltaTime);

    
};

#endif