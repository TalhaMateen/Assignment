/*program that take two string as input from user and check if both strings are equal or not */
#include <iostream>
#include <string>
using namespace std;
int main(){
int i, length1, j, length2;
string letter1, letter2;

char temp;
bool num=false;

cout<<"Enter String 1: ";
cin>>letter1;
cout<<"Enter String 2: ";
cin>>letter2;

length1=letter1.length();
length2=letter2.length();

  if(length1==length2){
  for(i=0; i<letter2.length(); i++){

   if(letter1[i]==letter2[i]){
	num=true;
	continue;
}
   else{
	num=false;
	cout<<"Both Strings are Not the Same!"<<endl;
	break;
}	
}
   if(num==true){
	cout<<"Strings are Same, Updating String!"<<endl;
	length1=length1-1;
   
   for(i=0; i<=length1/2; i++){
	temp=letter1[i];
	letter1[i]=letter1[length1-i];
	letter1[length1-i]=temp;
}
	
	cout<<"Updated String 1: "<<letter1;
		
}
}
else{
	cout<<"Both Strings are not Equal!";
}
return 0;
}
