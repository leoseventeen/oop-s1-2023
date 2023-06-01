#include "Cell.h"
#include "Effect.h"

class Trap : public Cell, public Effect {
public:
    Trap(int x, int y) : Cell(x, y, 'T'), active(true) {}

    bool isActive() { return active; }

    void apply(Cell& cell) override {
        cell.setType('T');
        active = false;
    }

private:
    bool active;
};
