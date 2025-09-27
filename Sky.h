#ifndef SKY_H
#define SKY_H

#include <iostream>
#include <cstdlib>
#include <ctime>

struct Sky
{
    std::string line {}; 
    Sky* next {nullptr};

    inline void setupLine()
    {
        constexpr int lineSize {40};
        for(int i = 0; i < lineSize; i++)
        {
            int state = std::rand() % 100 + 1;

            if(state > 100 || state < 0)
            {
                std::cerr << "Error. Invalid State\n";
                return;
            }

            if(state <= 96)
                line += ' ';
            else if(state >= 97 && state <= 98)
                line += '$';
            else
                line += '.';
        }
    }
};

#endif