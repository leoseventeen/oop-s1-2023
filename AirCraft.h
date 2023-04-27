#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft {
public:

AirCraft();
AirCraft(int w);   

int get_weight() const;
void set_weight(int w);
float get_fuel() const;
void set_fuel(float f);
int get_numberOfFlights() const;
void set_get_numberOfFlights(int n);

void refuel();               
virtual void fly(int headwind, int minutes);

private:

int weight;
float fuel;
int numberOfFlights;

};
#endif
         


