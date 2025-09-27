#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ncurses.h>

#include "Sky.h"
#include "Game.h"

int main()
{
    std::srand(std::time(nullptr));

    Game game;
    game.setSky();
    game.displaySky();

    return 0;
}