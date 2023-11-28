/*Write a C++ program, take an integer value from user and check if it’s greater
than 10 and less thanequal to 20. Print 1 if yes and print 0 if no. Use 
appropriate datatype for output*/

#include <iostream>
using namespace std;
int main()
{
int num;    // __declaring input from user__
cout<<"Enter a number : ";
cin>>num;   // __read the input__

// __checking if number is less than equal to 20 and greater than 10__
if(num>10&&num<=20) 

{
cout<<" 1 "<<endl; // __print 1 if yes__
cout<<num<<" is less than equal to 20 and greater than 10";}

else {
cout<<" 0 "<<endl;  // __print 0 if no__
cout<<num<<" is not less than equal to 20 or greater than 10";}

return 0;    // __end program__
}

