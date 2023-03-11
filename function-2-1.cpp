#include <iostream>
#include<string.h>

using namespace std;
void print_as_binary(string decimal_number);
void binary(int n);
int main()
{
string number;
cout<<"Enter a decimal number:";
cin>>number;
print_as_binary(number);
return 0;
}
void print_as_binary(string decimal_number){
if (decimal_number.length()<1 || decimal_number.length()>9)
cout<<"Invalid decimal number"<<endl;
else{
int number,len,sum=0,i,j;
len=decimal_number.length();
for(i=0;i<len;i++){
j=decimal_number[i]-'0';
sum=sum*10+j;
}
binary(sum);
cout<<""<<endl;
}
}
void binary(int n){
if (n==0)
return;
else{
binary(n/2);
cout<<n%2<<endl;
}
}