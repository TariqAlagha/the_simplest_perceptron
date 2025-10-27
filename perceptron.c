#include <SDL2/SDL.h>
#define SCREEN_WIDTH 900
#define SCREEN_HEIGHT 600
int main() {
  SDL_Init(SDL_INIT_VIDEO);
  SDL_Window *window =
      SDL_CreateWindow("Fluid Sim", SDL_WINDOWPOS_CENTERED,
                       SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
  SDL_Surface *surface = SDL_GetWindowSurface(window);

  SDL_UpdateWindowSurface(window);
  SDL_Delay(1000);
}
