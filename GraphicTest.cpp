// GraphicTest.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <SDL.h>
#include <vector>
#include "bubble-sort.h"
#include "random-points.h"
#include "wrapper-dots-algorithm.h"


#define WIDTH 1000
#define HEIGHT 800
#define ARRAYSIZE 25

int main(int argc, char** argv)
{
    int vectorSize = ARRAYSIZE;

    std::cout << "Size of array or points needs: ";
    std::cin >> vectorSize;

    vectorSize ? 0 : vectorSize = ARRAYSIZE ;

    std::vector<std::vector<int>> points;

    points.assign(vectorSize, {0,0});

    RandomPoints(points, WIDTH, HEIGHT);

    BubbleSort(points);

    std::vector<std::vector<int>> bestDotsTop = WrapperDotsAlgorithm(points);

    BubbleSortReverse(points);

    std::vector<std::vector<int>> bestDotsBot = WrapperDotsAlgorithm(points);


    if (SDL_Init(SDL_INIT_VIDEO) == 0) {
        SDL_Window* window = NULL;
        SDL_Renderer* renderer = NULL;

        if (SDL_CreateWindowAndRenderer(WIDTH, HEIGHT, 0, &window, &renderer) == 0) {
            SDL_bool done = SDL_FALSE;

            while (!done) {
                SDL_Event event;

                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 32);
                SDL_RenderClear(renderer);

                SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
                for (int i = 0; i < points.size(); i++)
                {
                    SDL_RenderDrawPoint(renderer, points[i][0], points[i][1]);
                }

                for (int i = 1; i < bestDotsTop.size(); i++)
                {
                    SDL_RenderDrawLine(renderer, bestDotsTop[i  -1][0], bestDotsTop[i - 1][1], bestDotsTop[i][0], bestDotsTop[i][1]);
                }
                for (int i = 1; i < bestDotsBot.size(); i++)
                {
                    SDL_RenderDrawLine(renderer, bestDotsBot[i - 1][0], bestDotsBot[i - 1][1], bestDotsBot[i][0], bestDotsBot[i][1]);
                }
                //SDL_RenderDrawLine(renderer, bestDots[bestDots.size()-1][0], bestDots[bestDots.size() - 1][1], bestDots[0][0], bestDots[0][1]);
            
                SDL_RenderPresent(renderer);

                while (SDL_PollEvent(&event)) {
                    if (event.type == SDL_QUIT) {
                        done = SDL_TRUE;
                    }
                }
            }
        }

        if (renderer) {
            SDL_DestroyRenderer(renderer);
        }
        if (window) {
            SDL_DestroyWindow(window);
        }
    }
    SDL_Quit();
    return 0;
}
