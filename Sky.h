#ifndef SKY_H
#define SKY_H

#include <iostream>
#include <cstdlib>
#include <ctime>

struct Sky
{
    std::string lines {}; 
    Sky* next {nullptr};

    inline void setupLines()
    {
        constexpr int lineSize {40};
        for(int line = 0; line < lineSize; line++)
        {
            int state = std::rand() % 100 + 1;

            if(state > 100 || state < 0)
            {
                std::cerr << "Error. Invalid State\n";
                return;
            }

            if(state <= 96)
                lines += ' ';
            else if(state >= 97 && state <= 98)
                lines += '$';
            else
                lines += '.';
        }
    }
};

#endif