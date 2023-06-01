#include "Character.h"
#include "Trap.h"
#include <vector>

class Game {
public:
    Game() {}

    std::vector<Cell*>& getGrid() { return grid; }

    void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
        for (int i = 0; i < numCharacters; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            grid.push_back(new Character(std::get<0>(pos), std::get<1>(pos)));
        }
        for (int i = 0; i < numTraps; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            grid.push_back(new Trap(std::get<0>(pos), std::get<1>(pos)));
        }
    }

    void gameLoop(int maxIterations, double trapActivationDistance) {
        for (int i = 0; i < maxIterations; ++i) {
            for (Cell* cell : grid) {
                if (cell->getType() == 'C') {
                    Character* character = dynamic_cast<Character*>(cell);
                    character->move(1, 0);
                    for (Cell* other : grid) {
                        if (other->getType() == 'T') {
                            Trap* trap = dynamic_cast<Trap*>(other);
                            if (Utils::calculateDistance(cell->getPos(), other->getPos()) <= trapActivationDistance && trap->isActive()) {
                                trap->apply(*cell);
                            }
                        }
                    }
                    if (std::get<0>(cell->getPos()) >= gridWidth || std::get<1>(cell->getPos()) >= gridHeight) {
                        std::cout << "Character has won the game!" << std::endl;
                        return;
                    }
                }
            }
        }
        std::cout << "Maximum number of iterations reached. Game over." << std::endl;
    }

private:
    std::vector<Cell*> grid;
    int gridWidth, gridHeight;
};
