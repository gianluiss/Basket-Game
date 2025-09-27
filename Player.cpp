#include "Player.h"
#include "Game.h"

#include <iostream>
#include <ncurses.h>

void Player::setBasket()
{
    m_tail->line[19] = 'U';
}