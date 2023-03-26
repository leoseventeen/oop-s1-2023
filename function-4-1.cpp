#include<iostream>
#include<vector>
using namespace std;
int *readNumbers();{
int*numbers;
numbers= new int[10];

for(int i=0; i<10; i++){
    int userinput;
    cin >> userinput;
    *(numbers+i)=userinput;
}
return numbers;
}
int secondSmallestSum(int *numbers,int length){
    for(int i=0; i<length; i++){
        for(int j<1; j<=length; j++){
            cout<<numbers(i,i+j)<<endl
        }
    }
}
#include<iostream>

int* readNumbers()

{

int *arr;

arr = new int[10];

for(int i=0; i<10; i++){

std::cin>>*(arr+i);

}

return arr;

}

void printNumbers(int *numbers, int length){

for(int i=0; i<length; i++){

std::cout<<i<<" "<<*(numbers+i)<<std::endl;

}

}

int secondSmallestSum(int *numbers, int length)

{

int small, secondsmall;

small = secondsmall = 0;

//add all numbers to secondsmall and one number less to small

for(int i=0; i<length-1; i++)

{

small += numbers[i];

secondsmall += numbers[i];

}

secondsmall += numbers[length-1];

//update small and secondsmall

for(int i=0; i<length; i++)

{

int sum = 0;

for(int j=i; j<length; j++)

{

sum += numbers[j];

if(sum<small)

{

secondsmall = small;

small = sum;

}

else if(sum<secondsmall)

secondsmall = sum;

}

}

return secondsmall;

}

int main()

{

int* a;

a = readNumbers();

int secondsmall = secondSmallestSum(a, 10);

std::cout<<"Second smallest sum: "<<secondsmall<<std::endl;

}