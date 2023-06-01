#include "Cell.h"
#include "Character.h"
#include "Trap.h"
#include "Utils.h"
#include <vector>
#include <iostream>

class Game {
private:
    std::vector<Cell*> grid;

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
            for (Cell* c : grid) {
                if (c->getType() == 'C') {
                    Character* character = static_cast<Character*>(c);
                    character->move(1, 0);

                    for (Cell* other : grid) {
                        if (other->getType() == 'T') {
                            Trap* trap = static_cast<Trap*>(other);
                            if (trap->isActive() && Utils::calculateDistance(character->getPos(), trap->getPos()) <= trapActivationDistance) {
                                trap->apply(*character);
                            }
                        }
                    }

                    if (std::get<0>(character->getPos()) >= maxIterations || std::get<1>(character->getPos()) >= maxIterations) {
                        std::cout << "Character has won the game!" << std::endl;
                        return;
                    }
                }
            }
        }
        std::cout << "Maximum number of iterations reached. Game over." << std::endl;
    }
};
