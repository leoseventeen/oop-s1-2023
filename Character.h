#include "Cell.h"

class Character : public Cell {
public:
    Character(int x, int y) : Cell(x, y, 'C') {}

    void move(int dx, int dy) {
        std::tuple<int, int> pos = getPos();
        setPos(std::get<0>(pos) + dx, std::get<1>(pos) + dy);
    }
};
