#include "Game.h"
#include "Sky.h"

//void Game::addLine

void Game::resetSky()
{
    constexpr int skyHeight{20};

    Sky* current = head;
    for(int i = 0; i < skyHeight; i++)
    {
        if(head == nullptr)
        {
            head = new Sky;
            head->next = nullptr;
            head->lines = "                                        ";
            current = head;
        }
        else
        {
            Sky* newPtr = new Sky;
            newPtr->next = nullptr;
            newPtr->lines = "                                        ";
            current->next = newPtr;
            current = current->next;
        }


        //for player tracking
        //the tail should be at node 21. Currently this is only up to 20 nodes
        if(i == skyHeight-1)
            tail = current;
    }
}


void Game::displaySky() const
{
    if(head == nullptr)
    {
        std::cout << "Head is null\n";
        return;
    }

    std::cout << "------------- Falling Money --------------\n";

    Sky* current = head;
    while(current != nullptr)
    {
        std::cout << '|' << current->lines << "|\n";
        current = current->next;
    }
}

/*
NOTE: THIS MIGHT BE OBSOLETE SINCE THE GAME SHOULD START WITH ALL BLANKS AND NODES GET ADDED GRADUALLY
void Game::setSky()
{
    constexpr int skyHeight{20};

    Sky* current = head;
    for(int i = 0; i < skyHeight; i++)
    {
        if(head == nullptr)
        {
            head = new Sky;
            head->next = nullptr;
            head->setupLines();
            current = head;
        }
        else
        {
            Sky* newPtr = new Sky;
            newPtr->next = nullptr;
            newPtr->setupLines();
            current->next = newPtr;
            current = current->next;
        }


        //for player tracking
        //the tail should be at node 21. Currently this is only up to 20 nodes
        if(i == skyHeight-1)
            tail = current;
    }
}
*/