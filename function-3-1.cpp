#include<iostream>      
using namespace std;

bool equalsArray(int *numbers1,int *numbers2,int length)        // Function for checking whether both arrays are equal or not
{
   bool res = true;       // this will store the result after checking the equality of both the arrays
  
   if(length<1)           // if length is less than 1  
   res = false;           // then storing false in res as given
   else           // if length is greater than or equals to 1
   {
       for(int i=0;i<length;i++)               // iterating for all the elements both the arrays
       {
           if(numbers1[i]!=numbers2[i])           // if elements are not equal
           {
               res = false;           // then res = false
               break;               // and break , means there is no need for further checking
           }
       }
   }
   return res;           // returning the result value after checking the equality of both the arrays
}

void readNumbers(int *arr,int length)           // this function is for reading the array elements
{
   for(int i=0;i<length;i++)           // reading length elements are size is given
   {
       int x;
       cin>>x;           // reading each element for array
       arr[i] = x;           // and storing the element value in the array
   }
}  

int main()
{
   int length;           // it will store the length value of both the arrays
   cout<<"Enter the length value : ";           // asking for the input of length value of both the arrays
   cin>>length;           // taking input of length of both the arrays
  
   if(length != 0)               // if length is greater than 0 , then we'll ask for input of the elements of the array1
   cout<<"\nEnter "<<length<<" values for array 1 : ";
  
   int *arr1 = new int[length];           // creating an array1 of size length dynamically
   readNumbers(arr1,length);           // calling readNumbers() for reading the elements of array1
  
   if(length != 0)           // if length is greater than 0 , then we'll ask for input of the elements of the array2
   cout<<"\nEnter "<<length<<" values for array 2 : ";
  
   int *arr2 = new int[length];           // creating an array2 of size length dynamically
   readNumbers(arr2,length);           // calling readNumbers() for reading the elements of array1
  
   bool result = equalsArray(arr1,arr2,length);           // calling equalsArray() for checking the equality of both the arrays and storing the returned value as our required result
  
   delete(arr1);           // deleting the dynamically created array1
   delete(arr2);           // deleting the dynamically created array2
  
   cout<<boolalpha<<"\nResult = "<<result<<"\n";           // printing the result value ( boolalpha is used for printing result as true/false instead of 0/1 )
}
