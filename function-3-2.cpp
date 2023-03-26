#include <iostream>
using namespace std;

// Returns true if arr1[0..n-1] and arr2[0..m-1]
// contain same elements.
int *reverseArray(int *numbers1, int length)
{
//
int *rev = new int [length];
// store numbers1 array in rev array in reversed
for(int i=0; i<length; i++)
{
rev[i] = numbers1[length-i-1];
}
return rev;
}

// Returns true if arr1[0..n-1] and arr2[0..m-1]
// contain same elements.
bool equalsArray(int *numbers1, int *numbers2, int length)
{
// if length of arrays is less then 1
if (length < 1)
return false;
else
{
// Linearly compare elements
for (int i = 0; i < length; i++)
if (numbers1[i] != numbers2[i])
return false;

// If all elements were same.
return true;
}
}


// Driver Code
int main()
{
int length;
// enter length of array
cout<<"Enter length of array : ";
cin>>length;
// dynamically declare array
int *arr1 = new int [length];
// enter elements of 1st array
cout<<"Enter element of array\n";
for(int i = 0; i<length; i++)
{
cin>>arr1[i];
}
// call function reverseArray
int *reversedArray = reverseArray(arr1, length);
cout<<"reversed array is : ";
// print revered array
for(int i = 0; i<length; i++)
{
cout<<reversedArray[i]<<" ";
}
cout<<endl;

// compare both arrays i.e. first array and reversed array
if (equalsArray(arr1, reversedArray, length))
cout << "Yes";
else
cout << "No";

//delete both arrays
delete[] arr1;
delete[] reversedArray;
return 0;
}