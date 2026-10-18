#include <iostream>
using namespace std;

  int main(){

    
    // for(int i = 0; i<=100; i++){
    //  cout<<"Numbers from 0 to 100: "<<i<<endl;

    // }

    //  for(int i = 1; i<=50; i++){
    //     if(i%2 !=0){
    //       cout<<i<<endl;
    //     }
      
    //  }

    // int n,sum=0;

    // cout<<"Please enter the value: "<<endl;
    // cin>>n;

    // for(int i = 0; i<=n; i++){
    //   if(i%2==0){
    //     sum=sum+i;
        
    //   }
    // }
    // cout<<"sum of every number: "<<sum<<endl;

   
    int n, Total=0;

    cout<<"Please enter the value: "<<endl;
    cin>>n;

    for(int i = 5; i<=n; i++){
      if(i%5==0){
        Total++;
      }

    }
    cout<<"Total value divisble by 5: "<<Total<<endl;


    
    return 0;
}