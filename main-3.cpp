#include "Game.h"

int main() {
    Game game;
    game.initGame(2, 3, 10, 10);
    game.gameLoop(20, 1.5);
    return 0;
}
