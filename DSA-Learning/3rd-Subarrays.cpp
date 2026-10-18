#include <iostream>
#include <climits>
#include <vector>
using namespace std;
    int main(){

//  int n = 5;
//  int arr[n] = {1,2,3,4,5};

//  for(int st = 0; st<n; st++){ //from where should i start, here we've started from 0 index incremented it to other index after 1st loop ends.
//     for(int end=st; end<n; end++){ //here it is saying how far should i go? the answer is till nth number of index
//         for(int i = st; i<=end; i++){ //
//             cout<<arr[i];
//         }
//         cout<<" ";
//     }
//     cout<<endl;
//  }

// This is called as brute force approach

// int n = 8;                                     
// int arr[n] = {3,-4,5,4,-1,7,-8};

    // int maxSum = INT_MIN;                          

    // for(int st = 0; st<n; st++){                                     
    //     int sum = 0;
    //     for(int end = st; end<n; end++){
    //         sum = sum + arr[end];
    //         maxSum = max(sum, maxSum);
    //     }
    // }
    // cout<<"Maximum subarray: "<<maxSum<<endl;


// This is called KADANE'S ALGORITHM:

vector <int> vec = {3,-4,5,4,-1,7,-8};

int currSum = 0; int maxSum = INT_MIN;

 for(int val: vec){
    currSum = currSum + val;
    maxSum = max(currSum, maxSum);
    if(currSum < 0){
        currSum = 0;
    }
 }
 cout<<"This is the value of maxSum: "<<maxSum<<endl;
 
    return 0;
}