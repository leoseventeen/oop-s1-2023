int sum_elements(int integers[], int length)
{
/*DECLARED sum VARIABLE AND INITIALIZED TO 0,IT IS USED TO STORE THE SUM OF ELEMENTS OF ARRAY.*/
int sum=0;
if(length<=0) //IF LENGTH VALUE IS LESSTHAN OR EQUAL TO 0,RETURNS -1
return -1;
else //ELSE CALCULATES THE sum AND RETURNS THE VALUE
{
for(int i=0;i<length;i++)//RUNS THE LOOP FROM 0 TO LENGTH OF ARRAY
sum = sum + integers[i];//THE sum VARIABLE IS ADDED WITH ALL THE VALUES OF ARRAY
}
return sum;//RETURNS THE sum VALUE.
}
bool is_a_palindrome(int integers[], int length)
{
if(length<=0) //IF LENGTH VALUE IS LESSTHAN OR EQUAL TO 0,RETURNS false.
return false;
/*RUNS THE LOOP FROM 0 TO HALF THE LENGTH OF ARRAY AND COMPARES THE FIRST ELEMENT WITH LAST ELEMENT AND SECOND WITH PENULTIMATE ELEMENT SO ON*/
for(int i=0;i<length/2;i++)
if(integers[i]!=integers[length-i-1]) //IF THE ELEMENTS ARE NOT EQUAL IT RETURNS false.
return false;
return true;//IF THE ARRAY IS A PALINDROME THIS STATEMENT IS EXECUTED AND IT RETURNS true.
}

int sum_if_a_palindrome(int integers[], int length)
{
if(length<=0)//IF LENGTH VALUE IS LESSTHAN OR EQUAL TO 0,RETURNS -1
return -1;
if(is_a_palindrome(integers,length))//CALLS THE METHOD AND CHECKS THE ARRAY IS A PALINDROME .
{
/*IF IT IS A PALINDROME ,CALLS sum_of_elements ARRAY AND RETURNS THE VALUE RETURNED BY THE CORRESPONDING FUNCTION.*/
return sum_elements(integers,length);
}
else return -2;//IF THE ARRAY IS NOT A PALINDROME THEN IT RETURNS -2.
}

//TEST DRIVER FUNCTION

#include <iostream>
using namespace std;

int main()
{
int length;
cout<<"Enter length : ";
cin>>length;

int a[length];
if(length>1)
{
cout<<"Enter "<<length<<" elements : ";
for(int i=0;i<length;i++)
cin>>a[i];
}
cout<<sum_if_a_palindrome(a,length);
return 0;
}