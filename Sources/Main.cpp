#include <iostream>
//#include <SDL.h>
#include "TestLib.h"

//----------------------------------------------------------------------------------------------------
// program entry point

int main(int, char**)
  {
	  TestLibFunc();
/*
  if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
    std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
    return 1;
    }

  SDL_Quit();
  */

  return 0;
  }