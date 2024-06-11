#ifndef CHARACTERRENDER_HPP
#define CHARACTERRENDER_HPP

#include <SFML/Graphics.hpp>
#include <string>
#include "AbstractRender.hpp"

class CharacterRender : AbstractRender{
    private:
        bool mUp;
        bool mDown;
        bool mLeft;
        bool mRight;

    public:
        CharacterRender();
        CharacterRender(std::string path);
        ~CharacterRender();
        void handleInput(sf::Keyboard::Key k, bool state);
        void updateSprite(float deltaTime);

};

#endif