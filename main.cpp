#include "sengine.h"

SEngineResult SEngine_HandleEvent(SDL_Event *event) {
    switch (event->type) {
        case SDL_EVENT_QUIT:
            return SEngineResult::QUIT;
        case SDL_EVENT_KEY_DOWN:
            if (event->key.key == SDLK_ESCAPE) {
                return SEngineResult::QUIT;
            }
        default:
            break;
    }
    return SEngineResult::CONTINUE;
}

int main(int argc, char *argv[]) {
    SEngine_Init(argc, argv);
    return 0;
}