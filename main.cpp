#include"game.h"

int main(){
    Game* game = new Game();

    if(!game->init("Tank Wars", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,SCREEN_WIDTH, SCREEN_HEIGHT)){
        SDL_Quit();
        return 1;
    }

    while(game->isRunning()){
    game->handleEvents();
    game->update();
    game->render();
    }

    game->close();

    return 0;
}
