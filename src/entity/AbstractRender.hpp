#ifndef ABSTRACTRENDER_HPP
#define ABSTRACTRENDER_HPP

#include <SFML/Graphics.hpp>

class AbstractRender {
    private:
        sf::RectangleShape sprite;
        sf::Texture texture;
    public:
    AbstractRender();
    ~AbstractRender();
    
    
};

#endif