/*program to find the largest prime number less than a given positive integer*/
#include <iostream>
using namespace std;

int main(){
int n, i, j;
bool numb=false;
cout<<"Enter a number : "; //asking user to enter the number
cin>>n;
i=n;
while(i>1){
 j=i-1;
 numb=false;
 while(j>1){
	if(i%j==0){
//cout<<i<<"  "<<j<<endl;
  numb=false;
  break;
}
else if(i%j==1){
numb=true;
}
j--;	
}		
if(numb==true){
cout<<"Largest prime number below "<<n<<" is: "<<i;
break;
}
i--;
}
return 0; //end program 
}
