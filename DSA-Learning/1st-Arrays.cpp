// #include<iostream>
// #include <climits>
// using namespace std;

// int main(){
// int size = 5; // size of array
// int marks[size]; // array of size 5

// for(int i = 0; i<size; i++){ 
//     cout<<"enter marks of student "<<i+1<<": "<<endl;  
//     cin>>marks[i];
// }

// for(int i = 0; i<size; i++){
//     cout<<"marks of student: "<<marks[i]<<endl;
// }

// cout<<sizeof(marks)<<endl; // size of array in bytes
// cout<<sizeof(marks)/sizeof(int)<<endl; // size of array in terms of number of elements

// return 0;  
// }

// #include<iostream>
// #include <climits>
// using namespace std;

// int main(){

// int size = 5;
// int marks[size] = {11, 45, 2, -75, 59};

// int smallest=INT_MAX; // Initialize smallest to maximum integer value
// int largest=INT_MIN; // Initialize largest to minimum integer value

// for(int i = 0; i<size; i++){
//     smallest = min(smallest, marks[i]); // Update smallest if current element is smaller
//     largest = max(largest, marks[i]); // Update largest if current element is larger
// }

// cout<<"The smallest element in the array is: "<<smallest<<endl;
// cout<<"The largest element in the array is: "<<largest<<endl;

//     return 0;
// }

// #include<iostream>
// #include <climits>

// using namespace std;

// int main(){

// int size = 5;
// int marks[size] = {11, 45, 2, -75, 59};


// int smallest = INT_MAX; // Initialize smallest to maximum integer value
// int largest = INT_MIN; // Initialize largest to minimum integer value

// for(int i = 0; i<size; i++){
//      smallest = min(smallest, marks[i]); // Update smallest if current element is smaller
//      largest = max(largest, marks[i]); // Update largest if current element is larger

// if(smallest==marks[i]){
//     cout<<"The smallest element in the array is: "<<smallest<<" & " <<i<<endl;
// }

// if(largest==marks[i]){
//     cout<<"The largest element in the array is: "<<largest<<" & " <<i<<endl;
// }
// // cout<<"The smallest element in the array is: "<<smallest<<" & " <<i<<endl;
// // cout<<"The largest element in the array is: "<<largest<<endl;
// }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void changeArr(int arr[], int &size){
//    cout<<"Insider function: "<<endl;
//    for(int i=0; i<size; i++)
// {
//    arr[i] = arr[i] + 1;
// }
                                             // CALL BY REFERENCE ARRAY
// };

//  int main(){

//  int size = 5;
//  int arr[size] = {1, 2, 3, 4, 5};

//  changeArr(arr, size);
//  cout<<"Outside function: "<<endl;

//  for(int i=0; i<size; i++){
//    cout<<arr[i]<<" ";
//  }
//    cout<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int linearSearch(int arr[], int size, int target){

// for(int i=0; i<size; i++){
//    if(arr[i]==target){
//       return i; // Return the index of the target element if found
//    }
// }
//  return -1; // Return -1 if the target element is not found

// }
// int main(){

// int sz = 7;
// int ar[sz] = {1,2,3,4,5,6,7};
// int targ = 5; // Target element to search for.
// // int target = 50; // Target element to search for but not present in the array.

// cout<<"The target element's index is: "<<linearSearch(ar, sz, targ)<<endl;


//    return 0;
// }

#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){

int start = 0, end = size - 1;

while(start<end){
swap(arr[start], arr[end]);
start++;
end--;
} } 
int main(){

int size = 4;
int arr[4] = {10,20,30,40};

int sz = 5;
int ar[5] = {10,20,30,40,50};

reverseArray(arr, size);
reverseArray(ar, sz);

for(int i=0; i<size; i++){
   cout<<arr[i]<<" ";
}
cout<<endl;

for(int i=0; i<sz; i++){
   cout<<ar[i]<<" ";
}


   return 0;
}