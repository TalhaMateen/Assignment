/*Write a C++program for a string which may contain lowercase 
and uppercase characters. The task is to remove all duplicate 
characters from the string and find the resultant string*/
#include <iostream>
#include <string>
using namespace std;

int main(){
string letter, uletter;
int len, count, count2;

cout<<"Please Enter a Word to detect and remove duplicate characters : ";
cin>>letter;
uletter=letter;

for(count=0; count<letter.length(); count++){
  tolower(letter[count]);
 
 for(count2=count+1; count2<=letter.length(); count2++ ){
	if(letter[count]==letter[count2]){
	  letter[count]=' ';
	  letter[count2]=' ';
	
}
}
}
    uletter="";
	for(count=0; count<letter.length(); count++){
		if(isspace(letter[count])){
		
	continue;
}
else{
	uletter += letter[count];
}
}
cout<<"New Word is: "<<uletter<<endl;
}
