#include<iostream>
#include<vector>
using namespace std;

int main(){

// vector<int>nitin;     // one of a syntax for vector which will return nothing & gives error.
// cout<<nitin[0]<<endl;

// vector<int>vec = {1,2,3};
// cout<<vec[0]<<endl;         // one of a syntax for vector

// vector<char>alpha = {'a','b','c'};
// cout<<alpha[0]<<endl;
// cout<<alpha[1]<<endl;
// cout<<alpha[2]<<endl;                // one of a syntax for vector

vector<int>vec = {10,20,30};
cout<<"push_back function in vector: "<<vec.size()<<endl;

vec.push_back(40);

for(int value: vec){
 cout<<value<<endl;
}

vec.pop_back();

for(int value: vec){
 cout<<value<<endl;
}

cout<<"Front value of the vector in the elements: "<<vec.front()<<endl;
cout<<"back value of the vector in the elements: "<<vec.back()<<endl;
cout<<"back value of the vector in the elements: "<<vec.at(0)<<endl;

cout<<"size of the vector: "<<vec.size()<<endl;
cout<<"capacity of the vector: "<<vec.capacity()<<endl;

return 0;
}