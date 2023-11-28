/*Perform division in C++ without / using for loops. You can use / only to display 
the final results. Your dividend must be greater than divisor.*/
#include <iostream>
using namespace std;

int main(){
int dividend=0, divisor=1, remainder, qoutient, result, count;

while(divisor>dividend){

 cout<<"REMEMBER : Dividend Must be Greater than the Divisor!"<<endl;
 cout<<"Enter the Dividend: ";
 cin>>dividend;
 cout<<"Enter the Divisor: ";
 cin>>divisor;
}

 for(count=1; count<=dividend; count++){
	remainder=dividend%divisor;
	result=(divisor*count)+remainder;

	if(result==dividend){
	 qoutient=count;
	 break;
}
}
	cout<<"qoutient is :" ;
	cout<<dividend<<" / "<<divisor<<" = "<<qoutient<<endl;
    if(remainder>0)
{
	cout<<"The Remainder is: "<<remainder;	
}
return 0;
}
