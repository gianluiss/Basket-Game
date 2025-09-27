#ifndef GAME_H
#define GAME_H

#include "Sky.h"

class Game
{
private:
    Sky* head = nullptr;
public:
    void setSky();
    void displaySky() const;
};

#endif