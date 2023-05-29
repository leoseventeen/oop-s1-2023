//C++ PROGRAM :

#include<iostream>

using namespace std;

//Animal class

class animal{

private:

string name;

int volume;

public:

animal(string n ,int v){

name=n;

volume =v;

}

void setName(string n){

name=n;

}

void setVolume(int v){

volume =v;

}

string getName(){

return name;

}

int getVolume(){

return volume;

}

};

//hunter class

class hunter:public animal{

private:

int kills;

static int nextId;

public:

hunter(string, int);

string get_name();

int getKill();

};

//vegie class

class vegie:public animal{

private:

string favourite_food;

static int nextId;

public:

vegie(string , int );

string getFavourite();

void setFavourite(string n);

string get_name();

};

//hunter.cpp

#include"animal.cpp"

int hunter::nextId = 1000;

hunter::hunter(string n ,int v):animal(n,v){

kills = 0;

nextId++;

}

int hunter::getKill(){

return kills;

}

string hunter::get_name(){

return "Hunter "+this->getName();

}

//vegie.cpp

#include"animal.cpp"

int vegie::nextId = 100;

vegie::vegie(string n ,int v):animal(n,v){

favourite_food = "grass";

nextId++;

}

string vegie::getFavourite(){

return favourite_food;

}

string vegie::get_name(){

return "Safe "+this->getName();

}

void vegie::setFavourite(string f){

favourite_food = f;

}

