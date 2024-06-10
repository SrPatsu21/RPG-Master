#ifndef MAPRENDER_HPP
#define MAPRENDER_HPP

#include <SFML/Graphics.hpp>
#include <list>
#include "../global.hpp"
//todo debug only
#include <iostream>

class MapRender {
    private:
        // std::list <sf::Sprite> tiles;
        sf::Sprite tiles[9];
        sf::Texture tileTexture;
        float centerX;
        float centerY;
    public:
        MapRender();
        ~MapRender();
        void initMapRender(sf::View &view);
        void updateTiles(sf::View &view);
        void render(sf::RenderWindow &win, sf::View &view);
};

#endif