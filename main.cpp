#include "Sky.h"
#include "Game.h"
#include "Player.h"

#include <iostream>
#include <ncurses.h>


int main()
{
    std::srand(std::time(nullptr));

    Game game;
    Player player;

    game.resetSky();
    player.setTail(game.getTailPtr());
    player.setBasket();
    game.displaySky();

/*
    char c{};
    while(c != 'x')
    {
        std::cin >> c;
        if(c == 'q')
        {
            game.addLine();
            player.setTail(game.getTailPtr());
            player.setBasket();
            game.displaySky();
        }
    }
*/

    return 0;
}