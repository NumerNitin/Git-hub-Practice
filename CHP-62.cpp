#include <iostream>
#include<fstream>
using namespace std;
    int main(){

 //This Program shows method function open() to open a file and eof() function to check the end of file.

 ofstream output; // creates an output file stream object named output
 output.open("sample62.txt"); // opens the file sample62.txt for writing
 output<<"Mayank likes to play CSG02, but he has a skill issue not getting killed in any game";
 output.close();

 string read;
 ifstream input;
 input.open("sample62.txt");
 
 while(input.eof()==0){ //eof() function returns true if the end of file is reached, otherwise it returns false
    getline(input, read); //getline() function reads a line from the input stream and stores it in the string variable read
    cout<<read<<endl;   // cout<<read<<endl;   // prints the read string to the console
 }


    return 0;
}