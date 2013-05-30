#ifndef GAME_H
#define GAME_H

#include "screentemplate.h"
#include <iostream>

class Game : public ScreenTemplate
{
    public:
        Game();
        ~Game();
        int run(sf::RenderWindow &app);
    protected:
    private:
};

#endif // GAME_H
