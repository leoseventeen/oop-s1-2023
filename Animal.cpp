#include"Animal.h"
void Animal::set_name(string n){
name = n;
}
void Animal::set_volume(int vol){
volume = vol;
}
int Animal::get_volume(){
return volume;
}
int Animal::get_animalID(){
return animalID;
}