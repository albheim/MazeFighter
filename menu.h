#ifndef MENU_H
#define MENU_H

#include "screentemplate.h"
#include <iostream>

class Menu : public ScreenTemplate
{
    public:
        Menu();
        ~Menu();
        int run(sf::RenderWindow &app);
    protected:
    private:
};

#endif // MENU_H
