#include "Unit.h"

Unit::Unit(){
    value=0;
    num_bedrooms=0;
    area=0;    
}

Unit::Unit(int unit_val, int num_beds, double unit_size){
    value=(unit_val<0)?0:unit_val;
    num_bedrooms=num_beds;
    area=unit_size;
}

int Unit::gei_num_bedrooms(){
    return gei_num_bedrooms;
}

int Unit::get_value(){
    return value;
}

double Unit::get_area(){
    return area;
}