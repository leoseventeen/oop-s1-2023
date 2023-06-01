#ifndef CHARACTER_H
#define CHARACTER_H

#include "Cell.h"

class Character : public Cell {
public:
    Character(int x, int y) : Cell(x, y, 'C') {}

    void move(int dx, int dy) {
        int x = std::get<0>(getPos());
        int y = std::get<1>(getPos());
        setPos(x + dx, y + dy);
    }
};

#endif // CHARACTER_H
