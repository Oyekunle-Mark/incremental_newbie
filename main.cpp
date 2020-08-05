#include <iostream>
#include <SDL.h>

int main()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "Not working" << std::endl;
        return 1;
    }

    std::cout << "Working" << std::endl;
    SDL_Quit();
}