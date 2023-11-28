// __C++ program to display factors of a number using for loops __
#include <iostream>
using namespace std;
int main()
{
int n;     // __declaring input number __
// __Getting input from user __ 
cout<<"Enter a positive number :"<<endl; 
cin>>n;
// as code is written for positive numbers only so, to ignore negative numbers using if statement__ 
if(n<0){
cout<<"Please enter a positive number :"<<endl;
cin>>n;
}
cout<<"The factors of "<<n<<" are : "; 

 for (int i=1;i<=n;i++) // declaring loop variable
    {
    if(n%i==0)    // if n is divisible to any number
    cout<<i<<" "; 
    }
return 0;
}
