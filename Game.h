#ifndef GAME_H
#define GAME_H

#include "Sky.h"

class Game
{
private:
    Sky* head = nullptr;
    Sky* tail = nullptr;
public:
    void resetSky(); //Sky nodes contains 40 space strings each
    void displaySky() const;

    //for debugs
    inline void displayTail() const
    {
        std::cout << tail->lines << '\n';
    }
};

#endif