#include "MapRender.hpp"

MapRender::MapRender() {
}

MapRender::~MapRender() {
}

void MapRender::initMapRender(sf::View &view) {
    float posX[3], posY[3];
    int temp;
    if (!this->tileTexture.loadFromFile("./src/resources/textures/grass-path.png")) {
        std::cout << "ERROR! from load p1 texture!" << std::endl;
    } else {
        std::cout << "SUCESS! from load p1 texture!" << std::endl;
    }
    //* center
    this->centerX = view.getCenter().x;
    this->centerY = view.getCenter().y;

    //* calc rows(posX) and lines(posY)
    posX[0] = this->centerX - (TILE_SIZE_X + (TILE_SIZE_X / 2));
    posX[1] = this->centerX - (TILE_SIZE_X / 2);
    posX[2] = this->centerX + (TILE_SIZE_X / 2);

    posY[0] = this->centerY - (TILE_SIZE_Y + (TILE_SIZE_Y / 2));
    posY[1] = this->centerY - (TILE_SIZE_Y / 2);
    posY[2] = this->centerY + (TILE_SIZE_Y / 2);
    
    std::cout << "pos0 - x " << posX[0] << " - y " << posY[0] << std::endl;
    std::cout << "pos1 - x " << posX[1] << " - y " << posY[1] << std::endl;
    std::cout << "pos2 - x " << posX[2] << " - y " << posY[2] << std::endl;
    //* rows
    for (int j = 0; j < 3; j++) {
        //* lines
        for (int i = 0; i < 3; i++) {
            temp = (j*3) + i;
            this->tiles[temp].setTexture(this->tileTexture);
            this->tiles[temp].setPosition(sf::Vector2f(posX[i], posY[j]));
            std::cout << "tile[" << temp << "] - x " << tiles[temp].getPosition().x << " y " << tiles[temp].getPosition().y << std::endl;
        }
    }
}

void MapRender::updateTiles(sf::View &view) {
    // std::cout << "view center - x " << view.getCenter().x << std::endl;
    // std::cout << "view center - y " << view.getCenter().y << std::endl;
}

void MapRender::render(sf::RenderWindow &win, sf::View &view) {
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            // std::cout << "tileX " << this->tiles->getPosition().x << "      tileY " << this->tiles->getPosition().y << std::endl;
            win.draw(this->tiles[((j*3)+i)]);
        }
    }
}