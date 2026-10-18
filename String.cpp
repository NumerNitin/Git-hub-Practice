#include <iostream>
using namespace std;

 int main(){

 string myname = "Nitin"; //normal string
 cout<<"This is my name: "<<myname<<endl;

//  string myname2("Nitin"); //constructor string
//  cout<<"This is my name: "<<myname<<endl;

 cout<<myname[0]<<endl; //with array of string we can know the character present at that particular index of the string.
 cout<<myname[4]<<endl;

 cout<<myname.at(0)<<endl; //we can use this as well to know the alphabet.
 cout<<myname.at(4)<<endl;

 cout<<myname.length()<<endl; //with this we can the length of the characters present inside a string.
 
 cout<<myname.empty()<<endl; //this checks whether our string is empty or not, then if it is true then 1 or false then 0.
  
 cout<<myname.back()<<endl; //this will tell the 1st character of a string from back.
 cout<<myname.front()<<endl; //this will tell the 1st character of a string from front.


 
 
 return 0;
}