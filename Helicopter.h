#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirCraft.h"
#include <string>

class Helicopter : public AirCraft {
public:
    Helicopter();
    Helicopter(int w, std::string n);

    std::string get_name() const;
    void set_name(const std::string& n);

    void fly(int headwind, int minutes) override;

private:
    std::string name;
};

#endif 
