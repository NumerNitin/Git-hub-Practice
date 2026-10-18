#include <iostream>
#include <list>
using namespace std;
    
void display(list<int> &ist){ //here we creating a reference for list of integer which will point object list1 & list2.
    list<int> :: iterator it; // we have data list of integers as list<int>, iterator as a data type & it as variable of that data type.
 for(it=ist.begin(); it!=ist.end(); it++){ //here we are saying that it is equal to ist then begin from start & end where it don't have any value till then keep upgrading.
    cout<<*it<<" ";
 }
  cout<<endl;
};

int main(){

 list<int> list1; //in this list1 it don't have elements & values of that elements

 list1.push_back(10);
 list1.push_back(33);
 list1.push_back(30);
 list1.push_back(12);
 list1.push_back(17);
 
//  list<int> :: iterator it; 
//  it = list1.begin();
//  cout<<*it;
//  it++;

 display(list1);
 
 list1.remove(33);
 display(list1);

 list1.pop_back();
 display(list1);
 list1.pop_front();
 display(list1);
//  list1.sort();
//  display(list1);



//  display(list1);

 list<int>list2(3); //here we have elements but we don't have value for elements.
 list<int> :: iterator iterate;
 iterate = list2.begin(); 
 *iterate = 45;
 iterate++;
 *iterate = 23;
 iterate++;
 *iterate = 11;
 iterate++;

 display(list2);

 list1.merge(list2);
 display(list1);
    return 0;
}