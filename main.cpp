#include "Sky.h"
#include "Game.h"

#include <iostream>
#include <ncurses.h>


int main()
{
    std::srand(std::time(nullptr));

    Game game;
    game.resetSky();
    game.displaySky();

    while(true)
    {
        game.addLine();
        game.displaySky();
    }
/*
    char c{};
    while(c != 'x')
    {
        std::cin >> c;
        if(c == 'q')
        {
            game.addLine();
            game.displaySky();
        }
    }
*/

    return 0;
}