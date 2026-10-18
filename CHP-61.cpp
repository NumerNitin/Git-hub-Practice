#include <iostream>
#include <fstream>
using namespace std;
    int main(){
 
//  string write = "My Goal is to become a good game developer.";
//  ofstream output("sample61(of).txt");
//  output<<write;
//  output.close();

 string read;
 ifstream input("sample61(of).txt");
//  input>>read;
 getline(input, read);
 cout<<read;
 input.close();

    return 0;
}