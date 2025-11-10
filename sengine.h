#ifndef SENGINE_LIBRARY_H
#define SENGINE_LIBRARY_H
#include <SDL3/SDL_events.h>

enum class SEngineResult {
    CONTINUE,
    QUIT,
};

SEngineResult SEngine_HandleEvent(SDL_Event *event); // TODO: wrap SDL_Event
void SEngine_AppQuit();
void SEngine_Init(int argc, char *argv[]);

#endif // SENGINE_LIBRARY_H