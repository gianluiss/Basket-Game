#include "Game.h"
#include "Sky.h"

void Game::addLine()
{
    if(head == nullptr)
    {
        std::cerr << "Error. Head is null\n";
        return;
    }

    if(tail == nullptr)
    {
        std::cerr << "Error. Tail is null\n";
        return;
    }

    Sky* newPtr = new Sky;
    newPtr->next = head;
    newPtr->setupLine();
    head = newPtr;
    
    //find tail's previous, assign head, and delete last
    Sky* current = head;
    while(true)
    {
        if( (current->next)->next == nullptr)
        {
            delete tail;
            tail = current;
            current->next = nullptr;
            return;
        }
        current = current->next;
    }
}

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
            head->line = "                                        ";
            current = head;
        }
        else
        {
            Sky* newPtr = new Sky;
            newPtr->next = nullptr;
            newPtr->line = "                                        ";
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
        std::cout << '|' << current->line << "|\n";
        current = current->next;
    }
}

//NOTE: THIS MIGHT BE OBSOLETE SINCE THE GAME SHOULD START WITH ALL BLANKS AND NODES GET ADDED GRADUALLY
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
            head->setupLine();
            current = head;
        }
        else
        {
            Sky* newPtr = new Sky;
            newPtr->next = nullptr;
            newPtr->setupLine();
            current->next = newPtr;
            current = current->next;
        }


        //for player tracking
        //the tail should be at node 21. Currently this is only up to 20 nodes
        if(i == skyHeight-1)
            tail = current;
    }
}