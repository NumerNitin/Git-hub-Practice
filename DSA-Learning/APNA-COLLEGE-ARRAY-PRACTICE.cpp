// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){

// // int size = 5;
// // int arr[size] = {11, 22, 33, 44, 55};
// // int sum = 0;
// // int product = 1;

// // for(int i=0; i<size; i++){
// //     sum = sum + arr[i];
// // }

// // cout<<"The sum of the array elements is: "<<sum<<endl;

// // for(int i=0; i<size; i++){
// //     product = product * arr[i];
// // }
// // cout<<"The product of the array elements is: "<<product<<endl;


// int size = 7;
// int arr[size] = {10, 67, -4, 0, 31, 90, -50};
// int smallest = INT_MAX;
// int largest = INT_MIN;
// int smallestIndex = 0;
// int largestIndex = 0;

// for(int i=0; i<size; i++){
//     smallest = min(smallest, arr[i]);
//     largest = max(largest, arr[i]);
// }

// cout<<"The smallest element in the array is: "<<smallest<<endl;
// cout<<"The largest element in the array is: "<<largest<<endl;

// for(int i=0; i<size; i++){
//     if(arr[i]==smallest){
//         smallestIndex = i;
//         // cout<<"The smallest element in the array is: "<<smallestIndex<<endl;
//     }
//     if(arr[i]==largest){
//         largestIndex = i;
//         // cout<<"The largest element in the array is: "<<largestIndex<<endl;
//     }
// }

// swap(arr[smallestIndex], arr[largestIndex]);

// for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";
// }

// return 0;

// }


// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;

// int main(){

// int size = 5;
// int array[size] = {5, 2, 8, 1, 9};

// int smallest = INT_MAX;

// for(int i = 0; i<size; i++){
//   smallest = min(smallest, array[i]);
// }
// cout<<"The smallest element in the array: "<<smallest<<endl;


// int size = 5;
// int nums[size] = {12, 45, 7, 89, 23};

// int largest = INT_MIN;

// for(int i = 0; i<size; i++){
//     largest = max(largest, nums[i]);
// }
// cout<<"The largest element in the array: "<<largest<<endl;


// int size = 5;
// int nums[size] = {10, 4, 25, 2, 18};

// int largest = INT_MIN;
// int smallest = INT_MAX;

// for(int i = 0; i<size; i++){
//     largest = max(largest, nums[i]);
//     smallest = min(smallest,nums[i]);
// }
// cout<<"The largest element in the array: "<<largest<<endl;
// cout<<"The smallest element in the array: "<<smallest<<endl;


// int size = 5;
// int nums[size] = {-5, -12, 3, 8, -2};

// int smallest = INT_MAX;

// for(int i = 0; i<size; i++){
//     smallest = min(smallest,nums[i]);
// }

// cout<<"The smallest element in the array: "<<smallest<<endl;

// int size = 5;
// int nums[size] = {8, 4, 10, 2, 6};

// int smallest = INT_MAX;
// int smallestindex = 0;

// for(int i = 0; i<size; i++){

//     smallest = min(smallest, nums[i]);
    
// }
// cout<<"smallest element in the array: "<<smallest<<endl;

// for(int i = 0; i<size; i++){
//     if(nums[i]==smallest){
//     smallestindex = i;
//     cout<<"index of smallest element in the array: "<<smallestindex<<endl;}
// }



// int size = 5;
// int nums[size] = {10, 20, 5, 8, 15};

// int largest = INT_MIN;
// int secondlargest = INT_MIN;

// for(int i = 0; i<size; i++){

//     if(nums[i]>largest){
//        secondlargest = largest;
//        largest = nums[i];
//     }

//     else if(nums[i]>secondlargest && nums[i]!=largest){
//         secondlargest = nums[i];
//     }
// }
// cout<<"Largest element in the array: "<<largest<<endl;
// cout<<"second largest element in the array: "<<secondlargest<<endl;




// int size = 5;
// int nums[size] = {7, 2, 9, 1, 5};

// int smallest = INT_MAX;
// int secondsmallest = INT_MAX;

// for(int i = 0; i<size; i++){

//     if(nums[i]<smallest){
//        secondsmallest = smallest;
//        smallest = nums[i];
//     }

//     else if(nums[i]<secondsmallest && nums[i]!=smallest){
//         secondsmallest = nums[i];
//     }
// }
// cout<<"smallest element in the array: "<<smallest<<endl;
// cout<<"second smallest element in the array: "<<secondsmallest<<endl;


// int nums[7] = {4, 2, 9, 2, 9, 1, 1};

// int smallest = INT_MAX;
// int largest = INT_MIN;

// for(int i = 0; i<7; i++){

//     if(nums[i]<smallest){
//        smallest = nums[i];
//     }

//     if(nums[i]>largest){
//         largest = nums[i];
//     }
// }
// cout<<"largest element in the array: "<<largest<<endl;
// cout<<"smallest element in the array: "<<smallest<<endl;

// int nums[5] = {13, 5, 28, 2, 19};

// int smallest = INT_MAX;
// int largest = INT_MIN;


// for(int i = 0; i<5; i++){

//     smallest = min(smallest, nums[i]);
//     largest = max(largest, nums[i]);

// }
  
// cout<<"The smallest element in the array: "<<smallest<<endl;
// cout<<"The largest element in the array: "<<largest<<endl;

// int difference = largest - smallest;

// cout<<"The difference of both smallest & largest element in the array: "<<difference<<endl;

// return 0;

// }

//  int findsmallest(int nums[], int size){

//     int smallest = INT_MAX;

//     for(int i = 0; i<5; i++){
//         smallest = min(smallest, nums[0]);
//     }
//     return smallest;
// };

//  int findlargest(int nums[], int size){

//    int largest = INT_MIN;

//     for(int i = 0; i<5; i++){
//         largest = max(largest, nums[i]);
//     }
//     return largest;
// };


// int main(){

// int size = 5;
// int nums[5] = {6, 12, 3, 25, 9};


// cout<<"smallest: "<<findsmallest(nums, size)<<endl;  
// cout<<"largest: "<<findlargest(nums, size)<<endl;  



//     return 0;
// }


// int main(){

// int nums[5] = {3, 17, 8, 21, 11};

// int largest = INT_MIN;

// for(int i = 0; i<5; i++){
//   largest = max(largest, nums[i]);
// }
//  cout<<"Largest: "<<largest<<endl;


//   return 0 ;
// }


// int main(){

// vector<int> nums = {15, 4, 30, 2, 18};

// int smallest = INT_MAX;
// int largest = INT_MIN;
// int smallestindex = 0;
// int largestindex = 0;

// for(int i = 0; i<5; i++){
//   smallest = min(smallest, nums[i]);
//   if(smallest==nums[i]){
//     smallestindex = i;
//   }
// }

// cout<<"smallest: "<<smallest<<" & "<<smallestindex<<endl;

// for(int i = 0; i<5; i++){
//   largest = max(largest, nums[i]);
//   if(largest==nums[i]){
//     largestindex=i;
//   }
  
// }
  
// cout<<"largest: "<<largest<<" & "<<largestindex<<endl;

//   return 0;
// }



// int main(){

// int size;
// cout<<"Please enter the element of the nums vector: "<<endl;
// cin>>size;
// cout<<endl;

// vector<int> nums(size);

// for(int i = 0; i<size; i++){
//   cin>>nums[i];
// }
//   cout<<endl;
 
// int largest = INT_MIN;
// int smallest = INT_MAX;
// int smallestindex = 0;
// int largestindex = 0;

// for(int i = 0; i<size; i++){
//   smallest = min(smallest, nums[i]);
//   if(smallest==nums[i]){
//   smallestindex = i;
//  }}

//  for(int i = 0; i<size; i++){
//   largest = max(largest, nums[i]);
//   if(largest==nums[i]){
//   largestindex = i;
//  }
// }

//  cout<<"smallest: "<<smallest<<endl;
//  cout<<"largest: "<<largest<<endl;
//  cout<<"largestindex: "<<largestindex<<endl;
//  cout<<"smallestindex: "<<smallestindex<<endl;
 


//  return 0;
// }







// #include<iostream>
// #include<vector>
// using namespace std;

// void changeValue(int &num){

// num = 50;
// }

// int main(){

// int num = 10;
// changeValue(num);

// cout<<num<<endl;

//   return 0;   
// }

// #include<iostream>
// using namespace std;

// void swapNumbers(int &x, int &y){

//   int temp = x;
//   x = y;
//   y = temp;
// }

// int main(){

// int a = 10, b = 20;
// cout<<"The value of a & b: "<<a<<" & "<<b<<endl;

// swapNumbers(a, b);
// cout<<"The value of a & b: "<<a<<" & "<<b<<endl;

//   return 0;
// }

// #include<iostream>
// using namespace std;

// int addTen(int &num){
// num = num + 10;
// return num;
// }

// int main(){

// int num = 25;
// cout<<"The value of num of adding: "<<addTen(num)<<endl;

//   return 0;
// }

// #include<iostream>
// using namespace std;

// void takeValue(int &x, int &y){

// if(x>y){
//   swap(x,y);

// }
// }

// int main(){

// int a=40, b=15;

// takeValue(a,b);
// cout<<"swap: "<<a<<" & "<<b<<endl;

//   return 0;
// }

// #include<iostream>
// using namespace std;

// void takeDamage(int &health){

//   cout<<"health after damage: "<<endl;
//   health = health - 20;

// }

// int main(){
 
// int health = 100;
// cout<<"Health of player before enemy damage: "<<health<<endl;

// takeDamage(health);
// cout<<health<<endl;

//   return 0;
// }

// #include<iostream>
// using namespace std;

// void changeArr(int nums[], int size){

//   cout<<"inside function: "<<endl;
//   for (int i = 0; i<size; i++){
//    nums[i] = nums[i] * 2;
//   }
// }

// int main(){

// int size = 4;
// int nums[size] = {2, 4, 6, 8};

// changeArr(nums, size);

// for(int i = 0; i<size; i++){
//   cout<<nums[i]<<endl;
// }

// cout<<endl;


//   return 0;
// }

// #include<iostream>
// using namespace std;

// void updateScore(int &score){

//     score = score + 100;
// }

// int main(){

// int score = 200; 

// updateScore(score);
// updateScore(score);

// cout<<"Value of score after twicing: "<<score<<endl;

//     return 0;
// }




// #include<iostream>
// using namespace std;

// int linearSearch(int nums[], int size, int target){

//     for(int i = 0; i<size; i++){
//       if(nums[i]==target){
//         return i;
//       }
//     }
//     return -1;
// }


// int main(){

// int size = 5;
// int nums[size] = {10, 20, 30, 40, 50};
// int target = 30;

// cout<<"index of target value: "<<linearSearch(nums, size, target)<<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int linearSearch(int nums[], int size, int target){

//     for(int i = 0; i<size; i++){
//         if(nums[i]==target){
//             return i;
//         }
//     }
//           return -1;
// }

// int main(){

//  int size = 5;
//  int nums[size] = {4, 8, 12, 16, 20};
//  int target = 15;

//  cout<<"index of target value in positive if it finds or "<<linearSearch(nums,size,target)<<endl;

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

// int size = 5;
// vector<int> nums = {5, 2, 9, 1, 7};
// int number;
// int n = nums.size();

// cout<<"Please enter a value: "<<endl;
// cin>>number;

// for(int i = 0; i<n; i++){
//     if(nums[i]==number){
//        cout<<i; 
//     }
// }

//   return -1;

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

// vector<int>nums = {2, 5, 8, 5, 10, 5};

// int n = nums.size();
// int target = 5;

// for(int i = 0; i<n; i++){

//   if(nums[i]==target){
//     cout<<" index of 1st 5 occurenece: "<<i<<endl;
//     break;
//   }
// }

//   return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//   vector<int> nums = {1, 3, 3, 5, 3, 7, 3};

//   int n = nums.size();
//   int count = 0;

//   for(int i = 0; i<n; i++){

//     if(nums[i]==3){
//       count++;
//     }
//   }
//   cout<<"The no. of times 3 appeared in the vector: "<<count<<endl;

//   return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// void reverseArray(int nums[], int size){

// int start = 0, end = size - 1;
// while(start<end){
//   swap(nums[start],nums[end]);
//   start++;
//   end--;
// }
// }


// int main(){

// int size = 5;
// int nums[size] = {1, 2, 3, 4, 5};

// reverseArray(nums,size);

// for(int i = 0; i<size; i++){
//   cout<<nums[i]<<" ";
// }
// cout<<endl;
//   return 0;
// }

// #include<iostream>
// using namespace std;

// void reverseArray(int nums[], int size){

//   int start = 1,  end = 4;
//   while(start<end){
//     swap(nums[start],nums[end]);
//     start++;
//     end--;
//   }
// }
// int main(){
// int size = 6;
// int nums[size] = {10, 20, 30, 40, 50, 60};

// reverseArray(nums, size);
// for(int i = 0; i<size; i++){
//   cout<<nums[i]<<" ";
// }
// cout<<endl;

//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

// int size = 3;
// int nums[size] = {1, 2, 3};

// for(int st = 0; st<size; st++){
//   for(int end = st; end<size; end++){
//     for(int i = st; i<=end; i++){
//       cout<<nums[i];
//     }
//      cout<<" ";  
//     }
//     cout<<endl;
// }

//   return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){

// int size = 3;
// int nums[size] = {2, 4, 6};
// int count = 0;

// for(int st = 0; st<size; st++){
//   for(int end = st; end<size; end++){
//          count ++;
//         }
//       }
//       cout<<count<<endl;

//   return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){

// int size = 4;
// int nums[size] = {1, 2, 3, 4};
// int count = 0;

// for(int st = 0; st<size; st++){
//   for(int end = size - 1; end<st; end++){
//          for(int i = st; i<=end; i++){
//           cout<<nums[i];
//          }
//          cout<<" ";
//         }
//         cout<<endl;
//       }

//   return 0;
// }






