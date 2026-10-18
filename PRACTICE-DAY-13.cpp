#include<iostream>
#include<vector>
using namespace std;

int main(){

vector <int> vec = {1,2,3};
for(int val : vec){
    cout<<"value: "<<val<<endl;
}
cout<<endl;

vec.push_back(4);

for(int val : vec){
    cout<<"value: "<<val<<endl;
}
cout<<endl;

vec.pop_back();
for(int val : vec){
    cout<<"value: "<<val<<endl;
}
cout<<endl;

cout<<"This is the size: "<<vec.size()<<endl;
cout<<"This is the capacity: "<<vec.capacity()<<endl;
cout<<"This is the value of empty: "<<vec.empty()<<endl;
cout<<"This is the value of front: "<<vec.front()<<endl;
cout<<"This is the value of back: "<<vec.back()<<endl;

return 0;
}