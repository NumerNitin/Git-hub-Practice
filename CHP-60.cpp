#include <iostream>
#include <fstream>
using namespace std;

int main(){

 string write = "My name is Numer Gaming AKA Vikrama nitin"; //string to be written in the file
  // Opening files using constructor and writing it
 ofstream output("sample.txt"); //creating an object of ofstream class and opening a file named sample.txt
 output<<write; //writing the string to the file

 string read; //string to read the content of the file
  // Opening files using constructor and reading it
 ifstream input("sample2.txt");
 //  input>>read;
 getline(input, read); //reading the content of the file line by line
 cout<<read; //printing the content of the file to the console
 

    return 0;
}