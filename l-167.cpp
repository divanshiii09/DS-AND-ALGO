// ✅ Use hashmap when:
// Array is unsorted
// You need fast lookup (find something quickly)
// No restriction on extra space

// ✅ Use two pointers when:
// Array is sorted
// Problem asks for constant space
// Pair / sum / difference type problem

// Agar array unsorted aur fast lookup chahiye → hashmap use karo
// Agar array sorted aur constant space chahiye → two pointers use karo

// CANNOT USE HASHMAP - AS ARRAY IS UNSORTED AND CONSTANT SPACE IS REQUIRED IN QUE 
//SO WE OPT FOR TWO POINTERS

//1 indexed array======== Coding → 0-based
//Output → 1-based (if asked)


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int i=0;
//         int j= numbers.size()-1;
//         while(i<=j){
//             int sum= numbers[i]+numbers[j];

//             if(sum==target){
//                 return{ i+1, j+1};
//             }
//             else if(sum>target){
//                 j--;
//             }
//             else{
//                 i++;
//             }
//         }
//         return{};
//     }
// };

// tc: O(n)
// sc: O(1)