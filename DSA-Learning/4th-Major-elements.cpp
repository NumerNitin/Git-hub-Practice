#include <iostream>
#include <vector>
using namespace std;
   
// vector<int> pairsum(vector<int> nums, int target){

// vector <int> ans;
// int n = nums.size();

// for(int i=0; i<n; i++){
//     for(int j=i+1; j<n; j++){
//         if(nums[i] + nums[j] == target){
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
// }
// }

// vector<int> pairsum(vector<int> nums, int target){ //O(n)

// vector <int> ans;
// int n = nums.size();

// int i = 0, j = n - 1;
// while(i<j){                         //i cannot be equal to j  because we don't want i & j to be pointing to the same value. then whole logic will won't work 
// int pairsum = nums[i] + nums[j];
// if(pairsum>target){
//     j--;
// }
// else if(pairsum<target){
//     i++;
// }
// else{
//     ans.push_back(i);
//     ans.push_back(j);
//     return ans;
// }

// }};
// int main(){

// vector <int> nums = {2,7,11,15};
// int target = 26;

// vector<int>ans = pairsum(nums,target);
// cout<<ans[0]<<","<<ans[1]<<endl;

//     return 0;
// }

// Brute force approach for Majority element:-

// #include<iostream>   
// #include<vector>
// using namespace std;

// int main(){

// vector<int> nums = {2,2,1,1,1,2,2};
// int n = nums.size();

// for(int val: nums){
//      int freq = 0;
  
// for(int elements : nums){
//     if(elements == val){
//         freq++;
//     }
// }
// if (freq > n/2){
//     cout<<"This is the majority element in the array: "<<val<<endl;
//     return val;
// }
// return -1;
// }
//     return 0;
// }

// Boyer Moore's Algorithm for majority algorithm:-

#include<iostream>
using namespace std;


int main(){

vector<int> nums = {1,2,2,1,1};

int freq = 0, ans = 0;

for(int i = 0; i<nums.size(); i++){

    if(freq == 0){
        ans = nums[i];
    }

    if(ans == nums[i]){
        freq++;
    }

    else{
        freq--;
    }

}

   int count = 0;
   for(int val : nums){
    if(val == ans){
        count++;
    }
   }
 
   if (count > nums.size() / 2) {
        cout << ans;
    }
    
    else {
        cout << -1;
    }

    return 0;
}