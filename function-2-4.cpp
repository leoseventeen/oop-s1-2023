#include<iostream>
using namespace std;
//Function declaration
int sum_min_and_max(int integers[], int length);
int max_integer(int integers[], int length);
int min_integer(int integers[], int length);
//main function
int main()
{
//Array initialization
int array1[] = { 5,6,10,1,2 };
//call function and display sum
cout << "Sum of maximum and minimum value of the integerarray is = " << sum_min_and_max(array1, 5)<<endl;
return 0;
}
// sum of the maximum and minimum of an array function
int sum_min_and_max(int integers[], int length) {
int x= max_integer(integers, length); //call maximum finding function
int y = min_integer(integers, length); //call minimum finding function
return x+y; //return sum

}
//max finding function
int max_integer(int integers[], int length) {
int high = integers[0], i;
for (i = 0; i < length; i++) {
if (integers[i] > high) {
high = integers[i];
}
}
return high;
}
//min finding function
int min_integer(int integers[], int length) {
int high = integers[0], i;
for (i = 0; i < length; i++) {
if (integers[i] < high) {
high = integers[i];
}
}
return high;
}