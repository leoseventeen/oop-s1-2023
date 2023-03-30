#ifndef UNIT_H
#define UNIT_H

Unit();
Unit(int unit_val, int num_beds, double unit_size);

class Unit{
public:

int get_num_bedrooms();
int get_value();
double get_area();

private:
    int value;
    int num_bedrooms;
    double area;
};