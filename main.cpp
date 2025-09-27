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

    return 0;
}