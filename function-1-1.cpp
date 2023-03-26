#include<iostream>

using namespace std;

//Function for reading 10 numbers and storing into dynamic array of 10 integers

int *readNumbers(){
   int *array;
   array = new int[10];
   for(int i=0;i<10;i++)
   cin>>array[i];
   return array;
}

//Displaying the numbers along with indexes stored in dynamic array

void printNumbers(int *numbers,int length){
   for(int i=0;i<length;i++)
   cout<<i<<" "<<numbers[i]<<"\n";
}

main-1-1.cpp:

//Including the file in which methods are written

#include "function-1-1.cpp"
using namespace std;

int main(){

//Calling the function to read values
   int* arr=readNumbers();

//Calling the function to display numbers
   printNumbers(arr,10);
   return 0;
}