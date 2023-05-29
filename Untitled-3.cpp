#include<iostream>
using namespace std;
class animal{ //this is animal class
private:
int animalId;
string name;
public:
animal() //constructor
{
animalId=0;
name="ant";
}
void setAnimal(int id,string nam) //setter function
{
animalId=id;
name=nam;
}
int getAnimaId() // get the animal id
{
return animalId;
}
string getName() // get animal name
{
return name;
}
};
class sort_by_animalId{
public:
static void sort(animal **animals,int n)
{

int i,j; //bubble sort is used
for (i = 0; i < n-1; i++)

// Last i elements are already in place
for (j = 0; j < n-i-1; j++)

if (((*animals+j))->getAnimaId() > ((*animals+j+1))->getAnimaId())
swap(*(*animals+j), *(*animals+j+1));

}
};
class sort_by_name{
public:
static void sort(animal **animals,int n)
{

int i,j; //bubble sort is used
for (i = 0; i < n-1; i++)

// Last i elements are already in place
for (j = 0; j < n-i-1; j++)

if (((*animals+j))->getName() > ((*animals+j+1))->getName())
swap(*(*animals+j), *(*animals+j+1));

}
};
int main()
{
animal *animals=new animal[5];
animals->setAnimal(1,"elephant");

(animals+1)->setAnimal(3,"lion");

(animals+2)->setAnimal(5,"dog");

(animals+3)->setAnimal(4,"cat");

(animals+4)->setAnimal(2,"rat");
cout<<"initial data";
cout<<endl;
for(int i=0;i<5;i++)
{
cout<<"\nId: "<<animals[i].getAnimaId()<<", name:"<<animals[i].getName();
}
sort_by_animalId::sort(&animals,5);
cout<<"\ndata after sorting with id";
cout<<endl;
for(int i=0;i<5;i++)
{
cout<<"\nId: "<<animals[i].getAnimaId()<<", name:"<<animals[i].getName();
}
sort_by_name::sort(&animals,5);
cout<<"\ndata after sorting with the name";
cout<<endl;
for(int i=0;i<5;i++)
{
cout<<"\nId: "<<animals[i].getAnimaId()<<", name:"<<animals[i].getName();
}
}