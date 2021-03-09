#include<bits\stdc++.h>

using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     //selction sort

//     for(int i=0;i<n-1;i++){
//         for(int j=i;j<n;j++){
//             if(a[j]>a[i]){
//                 int temp = a[j];
//                 a[j]=a[i];
//                 a[i]=temp;
//             }
//         }
//     }

//     //duplicate number algo
//     int duplicate=0;
//     for(int i=0;i<n-1;i++){
//          if(a[i]==a[i+1]){
//         duplicate =  a[i];
//         break;
//     }
//     return duplicate;
//     }
   
// }


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0) return abs(nums[i]);
            else nums[abs(nums[i])-1]=-(nums[abs(nums[i])-1]);
        }
        return -1;
    }
};