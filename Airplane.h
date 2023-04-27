#ifndef AIRPLANE_H
#define AIRPLANE_H
#include"AirCraft.h"
class Airplane:public AirCraft{
    public:

    Airplane();
    Airplane(int w, int p);

    int get_numPassengers() const;
    void reducePassengers(int x);

    void fly(int headwind, int minutes) override;

    private:
    int numPassengers;
};

#endif