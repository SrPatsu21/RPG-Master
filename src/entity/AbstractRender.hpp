#ifndef ABSTRACTRENDER_HPP
#define ABSTRACTRENDER_HPP

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include "Entity.hpp"
#include "../map/HitBox.hpp"
#include "../global.hpp"

class AbstractRender {
    protected:
        sf::RectangleShape sprite;
        sf::Texture texture;
        HitBox *hitBox;
    public:
    AbstractRender(std::string path);
    ~AbstractRender();
    void draw(sf::RenderWindow *win);
    void loadHitBox();
    void loadTexture(std::string path);
    void setSpritePos(double x, double y);
    void setSpriteSize(double x, double y);
    void movePos(double x, double y);
    sf::RectangleShape getSprite();
    virtual void updateSprite(sf::Time deltaTime) = 0;
    
};

#endif