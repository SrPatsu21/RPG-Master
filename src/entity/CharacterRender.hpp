#ifndef CHARACTERRENDER_HPP
#define CHARACTERRENDER_HPP

#include <SFML/Graphics.hpp>
#include <string>
#include "AbstractRender.hpp"

class CharacterRender : public AbstractRender{
    private:
        bool mUp;
        bool mDown;
        bool mLeft;
        bool mRight;

    public:
        CharacterRender(std::string path);
        ~CharacterRender();
        void handleInput(sf::Keyboard::Key k, bool state);
        void updateSprite(sf::Time deltaTime);

};

#endif