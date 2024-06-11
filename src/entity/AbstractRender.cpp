#include "AbstractRender.hpp"

AbstractRender::AbstractRender(std::string path) {
    this->loadTexture(path);
}

AbstractRender::~AbstractRender() {
    // delete (this->hitBox);
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
        std::cout << "SUCCESS! from load p1 texture!" << std::endl;
    }
    this->sprite.setTexture(&this->texture);
    this->sprite.setOrigin(this->texture.getSize().x / 2, this->texture.getSize().y / 2);
    this->loadHitBox();
}

void AbstractRender::setSpritePos(double x, double y) {
    this->sprite.setPosition((float)x, (float)y);
}

void AbstractRender::setSpriteSize(double x, double y) {
    this->sprite.setSize(sf::Vector2f((float) x,(float) y));
}

void AbstractRender::movePos(double x, double y) {
    this->sprite.move((float) x, (float) y);
    this->hitBox->setPos(this->sprite.getPosition().x, this->sprite.getPosition().y);
    // this->hitBox->moveXY(x, y);
}

sf::RectangleShape AbstractRender::getSprite() {
    return this->sprite;
}