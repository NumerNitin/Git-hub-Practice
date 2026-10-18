#include<iostream>
#include<climits>
using namespace std;

// int linearSearch(int arr[], int size, int target){
 
//    for(int i=0; i<size; i++){
//     if(target == arr[i]){
//     return i;
//     }
// }
// return -1;
// }

void reverseSearch(int arr[], int size){

 int start = 0, end =  size - 1; 

   while(start<end){
   swap(arr[start], arr[end]);
   start++;
   end--;
 }
}

int main(){

// int size = 5;
// int health [size] = {100, 80, 60, 40, 20};

// cout<<"The health of the players are: "<<endl;

// for(int i=0; i<size; i++){
//    cout<<health[i]<<",";
// }

//    cout<<endl;

// int size = 5;
// int health[size];

// for(int i=0; i<size; i++){
//     cout<<"Enter the health of player "<<i+1<<endl;;
//     cin>>health[i];
//     cout<<endl;
// }

//    cout<<"The health of the players are: "<<endl;
//    for(int i=0; i<size; i++){
//    cout<<"health of 5 players :"<<health[i]<<endl;
//    }
   
// int size = 6;
// int arr[size] = {10, 20, 30, 40, 50, 60};

// for(int i=0; i<size; i++){
//   cout<<"The value of arr[i] is: "<<arr[i]<<endl;
// }

//  cout<<endl;

// int size = 7;
// int arr[size] = {10, 67, -4, 0, 31, 90, -50};

// int smallest = INT_MAX;
// int largest = INT_MIN;

// for(int i=0; i<size; i++){
//  smallest = min(smallest, arr[i]);
// }

// cout<<"The smallest value in the array is: "<<smallest<<endl;

// for(int i=0; i<size; i++){
//     largest = max(largest, arr[i]);
// }
// cout<<"The largest value in the array is: "<<largest<<endl;

// int size = 5;
// int arr[size] = {5, 10, 15, 20, 25};
// int sum = 0;

// for(int i=0; i<size; i++){
//     sum = sum + arr[i];
// }

// cout<<"The sum of the array is: "<<sum<<endl;

// int size = 6;
// int arr[size] = {10, 25, 30, 45, 50, 75};
// int target;

// cout<<"Enter the target value: "<<endl;
// cin>>target;

// cout<<"if -1 then value doesn't exist otherwise, if a index returns then value exists: "<<linearSearch(arr, size, target)<<endl;

int size = 5;
int arr[size] = {10, 20, 30, 40, 50};

reverseSearch(arr, size);

for(int i = 0; i<size; i++){
  cout<<arr[i]<<" ";

}
 cout<<endl;

    return 0;
}