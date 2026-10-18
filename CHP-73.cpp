#include <iostream>
#include <map>
#include <string>
using namespace std;

 int main(){

 map<string, int> Datamapping;
 Datamapping["nitin"]=23; 
 Datamapping["rawat"] = 22; 
 Datamapping["phantom"] = 22; 
 Datamapping["harshit"] = 20; 

 map<string, int> :: iterator iter;
 Datamapping.insert( { {"Rohan", 89}, {"Akshat", 46} } ); //
 for(iter=Datamapping.begin(); iter!=Datamapping.end(); iter++){

    cout<<(*iter).first<<" "<<(*iter).second<<" "<<endl;
 }

    return 0;
}