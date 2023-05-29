//C++ PROGRAM :

//main.cpp
#include "animal.h"
#include "hunter.h"
#include <iostream>

int main(){
hunter defhunt = hunter();
std::cout<<defhunt.get_name()<<std::endl;
std::cout<<defhunt.get_volume()<<std::endl;
hunter newhunt = hunter("hunter",50);
std::cout<<newhunt.get_name()<<std::endl;
std::cout<<newhunt.get_volume()<<std::endl;
std::cout<<newhunt.get_kills()<<std::endl;
newhunt.set_kills(25);
std::cout<<newhunt.get_kills()<<std::endl;
std::cout<<newhunt.get_animalID()<<std::endl;

return 0;
}


//animal.cpp
#include "animal.h"
#include <iostream>

animal::animal(){
animalID++;
name="defaultname";
volume=0;
}

animal::animal(std::string n, int v){
animalID++;
name=n;
volume=v;
}

void animal::set_name(std::string n){
name=n;
}

void animal::set_volume(int v){
volume=v;
}

std::string animal::get_name(){

}

int animal::get_animalID(){
return animalID;
}

int animal::get_volume(){
return volume;
}


//animal.h
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class animal{
public:
animal();
animal(std::string n, int v);

void set_name(std::string n);
void set_volume(int v);

virtual std::string get_name()=0;
int get_animalID();
int get_volume();

protected:
std::string name ;
int animalID ;
int volume ;

};

#endif


//hunter.cpp
#include "animal.h"
#include "hunter.h"

int hunter::nextID=1000;

hunter::hunter(){
animalID=nextID;
nextID++;
name="defualthuntername";
volume=0;
kills=0;

}

hunter::hunter(std::string n, int v){
nextID++;
animalID=nextID;
name=n;
volume=v;
kills=0;
}

std::string hunter::get_name(){
return "Hunter: "+name;
}

void hunter::set_kills(int kill){
kills=kill;
}

int hunter::get_kills(){
return kills;
}


//hunter.h
#ifndef HUNTER_H
#define HUNTER_H

#include "hunter.h"

class hunter :public animal{
public:
hunter();
hunter(std::string n,int v);
void set_kills(int kill);
int get_kills();
std::string get_name();
private:
int kills;
static int nextID;

};

#endif


//vegie.cpp
#include "animal.h"
#include "vegie.h"

int vegie::nextID=100;

vegie::vegie(){
animalID=nextID;
nextID++;
name="defualtvegiename";
volume=0;
favourite_food="grass";

}

vegie::vegie(std::string n, int v){
animalID=nextID;
nextID++;
name=n;
v=volume;
favourite_food="grass";
}

std::string vegie::get_name(){
return "Safe: "+name;
}

void vegie::set_favourite_food(std::string food){
favourite_food=food;
}

std::string vegie::get_favourite_food(){
return favourite_food;
}


//vegie.h
#ifndef VEGIE_H
#define VEGIE_H

#include "animal.h"

class vegie :public animal{
public:
vegie();
vegie(std::string n,int v);
void set_favourite_food(std::string food);
std::string get_favourite_food();
std::string get_name();
private:
std::string favourite_food;
static int nextID;

};

#endif


//zoo.cpp
#include "zoo.h"
#include "vegie.h"
#include "hunter.h"
#include <iostream>

zoo::zoo(){
name="defaultzooname";
number_of_animals=0;
}

zoo::zoo(std::string n,int cows,int lions){
name=n;
number_of_animals=cows+lions;
animals = new animal*[number_of_animals];

for(int i=0;i<number_of_animals;i++){
if(i<cows){
vegie* temp = new vegie("Daisy",100);
animals[i]=temp;
}
else{
hunter* temp = new hunter("Clarence",50);
animals[i]=temp;
}
}
}

std::string zoo::get_name(){
return name;
}

int zoo::get_number_of_animals(){
return number_of_animals;
}

animal** zoo::get_animals(){
return animals;
}

zoo::~zoo(){
delete[] animals;
}


//zoo.h
#ifndef ZOO_H
#define ZOO_H

#include "animal.h"

class zoo{
public:
zoo();
zoo(std::string n,int cows,int lions);
~zoo();

std::string get_name();
int get_number_of_animals();
animal** get_animals();
private:
std::string name;
int number_of_animals;
animal **animals;
};

#endif