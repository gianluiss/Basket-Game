#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ncurses.h>

struct Sky
{
    std::string lines {}; 
    Sky* next {nullptr};

    void setupLines()
    {
        constexpr int lineSize {40};
        for(int line = 0; line < lineSize; line++)
        {
            int state = std::rand() % 100 + 1;

            if(state < 90)
                lines += ' ';
            else if(state >= 90 && state <= 95)
                lines += '$';
            else if(state > 95 && state <= 100)
                lines += '.';
            else
            {
                std::cerr << "Error. Wrong State\n";
                return;
            }
        }
    }
};

int main()
{
    std::srand(std::time(nullptr));

    Sky* head = new Sky;
    head->setupLines();

    std::cout << "| " << head->lines << " |\n";

    return 0;
}