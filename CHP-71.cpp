#include <iostream>
#include <vector> 
using namespace std;
  
void display(vector<int> &noonu){

    for(int i=0; i<noonu.size(); i++){
      
    cout<<"This is the value of the element: "<<noonu[i]<<endl;
 }

};

int main(){

 vector<int>Rawat;
 int element, size;
 cout<<"Please enter the size of the element: "<<endl;
 cin>>size;
 for(int i = 0; i<size; i++){

    cout<<"Please enter the element of the vector: "<<endl;
    cin>>element;
    Rawat.push_back(element);
 }

 display(Rawat);
 Rawat.pop_back();
 display(Rawat);

    return 0;
}