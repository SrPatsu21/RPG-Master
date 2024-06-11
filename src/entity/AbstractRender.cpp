#include "AbstractRender.hpp"

AbstractRender::AbstractRender() {
}

AbstractRender::AbstractRender(std::string path) {
    this->loadTexture(path);
}

AbstractRender::~AbstractRender() {
    delete (this->hitBox);
}

void AbstractRender::draw(sf::RenderWindow *win) {
    win->draw(this->sprite);
}

void AbstractRender::loadHitBox() {
    this->hitBox = new HitBox((double) this->sprite.getPosition().x, (double) this->sprite.getPosition().y);
}

void AbstractRender::loadTexture(std::string path) {
    if (!this->texture.loadFromFile(path)) {
        std::cout << "ERROR! from load p1 texture!" << std::endl;
    } else {
        std::cout << "SUCESS! from load p1 texture!" << std::endl;
    }
    this->sprite.setTexture(&this->texture);
    this->sprite.setOrigin(this->texture.getSize().x / 2, this->texture.getSize().y / 2);
    this->loadHitBox();
}

void AbstractRender::setSpritePos(double x, double y) {
    this->sprite.setPosition((float)x, (float)y);
}

void AbstractRender::movePos(double x, double y) {
    this->sprite.move((float) x, (float) y);
    this->hitBox->moveXY(x, y);
}