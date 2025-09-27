#ifndef GAME_H
#define GAME_H

#include "Sky.h"

class Game
{
private:
    Sky* head = nullptr;
    Sky* tail = nullptr;
public:
    void resetSky(); //Sky nodes contains 40 space strings each //will be used at the start of the game or when resetting the game
    void addLine();  //includes randomized lines NOTE: DELETES the tail node after adding

    void displaySky() const;

    //for debugs
    inline void displayTail() const
    {
        std::cout << tail->line << '\n';
    }

    inline void displayHead() const
    {
        std::cout << head->line << '\n';
    }

    void setSky();
};

#endif