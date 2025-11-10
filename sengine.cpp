#include "sengine.h"

#include <SDL3/SDL.h>

struct SEngine_Core {
    SDL_Window *window;
    SDL_Renderer *renderer;
} SEngine_Core;

void SEngine_Init(int argc, char *argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer("S-Engine", 1280, 720, 0, &SEngine_Core.window, &SEngine_Core.renderer);

    bool exit = false;

    while (!exit) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (SEngine_HandleEvent(&e) == SEngineResult::QUIT) {
                exit = true;
            }
        }

        SDL_RenderClear(SEngine_Core.renderer);
        SDL_RenderPresent(SEngine_Core.renderer);
    }
}