#include "Game.h"
#include "Sky.h"

void Game::setSky()
{
    Sky* current = head;
    for(int i = 0; i < 20; i++)
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
    }
}

void Game::displaySky() const
{
    if(head == nullptr)
    {
        std::cout << "Head is null\n";
        return;
    }

    Sky* current = head;
    while(current != nullptr)
    {
        std::cout << '|' << current->lines << "|\n";
        current = current->next;
    }
}