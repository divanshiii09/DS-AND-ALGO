//method 1: brute force (nested loop)

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int size=nums.size();
//         for(int i=0; i<size;i++){
//             for(int j=i+1; j<size;j++){
//                 if(nums[i]+nums[j]==target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };


//TC O(n^2)
// SC O(1)



//method 2: hashmap

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int>mp;
//         for(int i=0; i<nums.size();i++){
//             int remainder= target- nums[i];

//             if(mp.find(remainder)!= mp.end()){
//                 return{i, mp[remainder]};
//             }
//             else{
//                 mp[nums[i]]=i;
//             }
//         }
//         return {};
//     }
// };

// tc: O(n)
// dc: O(n)