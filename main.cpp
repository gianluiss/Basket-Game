#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ncurses.h>

struct Sky
{
    std::string lines {}; 
    Sky* next {nullptr};

    void setupSky()
    {
        constexpr int lineSize {20};
        for(int line = 0; line < lineSize; line++)
        {
            int state = std::rand() % 3;

            if(state == 0)
                lines += ' ';
            else if(state == 1)
                lines += '$';
            else if(state == 2)
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
    int r = std::rand() % 100 + 1; // 1-100

    Sky* head = new Sky;
    head->setupSky();

    std::cout << "| " << head->lines << " |\n";

    return 0;
}