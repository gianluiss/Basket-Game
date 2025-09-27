#ifndef GAME_H
#define GAME_H


#include "Sky.h" //remove after removing the inline functions. use forward declaration instead
//struct Sky;
#include "Player.h"

class Game
{
private:
    Sky* m_head = nullptr;
    Sky* m_tail = nullptr;
    //Player m_player{}; 
public:
    //Game functions NOTE:Do soon
    void start(); //UNDONE

    //Sky Functions
    void resetSky(); //Sky nodes contains 40 space strings each //will be used at the start of the game or when resetting the game
    void addLine();  //includes randomized lines NOTE: DELETES the last node after adding
    void displaySky() const;

    //Getter Functions
    Sky* getTailPtr() const {return m_tail;}

    //Player Functions
    //void setPlayer(Player& player) {m_player = player;}

    //for debugs
    inline void displayTail() const
    {
        std::cout << m_tail->line << '\n';
    }

    inline void displayHead() const
    {
        std::cout << m_head->line << '\n';
    }

    void setSky();
};

#endif