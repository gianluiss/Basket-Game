#ifndef PLAYER_H
#define PLAYER_H

struct Sky;

class Player
{
private:
    Sky* m_tail = nullptr;
public:
    Player() = default;

    Player(Sky*& tail) : m_tail{tail}
        {}

    void setTail(Sky* tail) {m_tail = tail;}
    void setBasket(); //Get current tail node and adds the basket at the center

    void moveLeft();
    void moveRight();

    //add the collission checking soon
};

#endif