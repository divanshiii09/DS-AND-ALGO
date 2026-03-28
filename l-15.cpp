//2 sum mai index mangte the toh sorting nhi kr skte hai 

//approach “Sort karo array → fix ek element → baaki do numbers 2-pointer se find karo → duplicates skip → store triplet”

// class Solution {
// public:
//     // Ye function basically 2-sum solve karta hai using 2 pointers
//     void twosum(vector<int>& nums, int target, int i, int j,
//                 vector<vector<int>>& result) {
        
//         // Jab tak left pointer < right pointer
//         while (i < j) {

//             // Agar sum bada hai target se → right ko left lao
//             if (nums[i] + nums[j] > target) {
//                 j--;
//             } 

//             // Agar sum chhota hai target se → left ko right le jao
//             else if (nums[i] + nums[j] < target) {
//                 i++;
//             } 

//             else {
//                 // ✅ Pair mil gaya

//                 // Duplicate values skip karo (left side)
//                 while (i < j && nums[i] == nums[i + 1]) {
//                     i++;
//                 }

//                 // Duplicate values skip karo (right side)
//                 while (i < j && nums[j] == nums[j - 1]) {
//                     j--;
//                 }

//                 // Result store karo (3 numbers ka triplet)
//                 result.push_back({-target, nums[i], nums[j]});

//                 // Dono pointers move karo
//                 i++;
//                 j--;
//             }
//         }
//     }

//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>> result;

//         // Agar 3 elements nahi hai → answer possible hi nahi
//         if (n < 3) {
//             return {};
//         }

//         // Step 1: Sort karo (important for 2-pointer + duplicate handling)
//         sort(nums.begin(), nums.end());

//         // Step 2: Ek element fix karo, baaki 2-sum se dhoondo
//         for (int i = 0; i < n - 2; i++) {

//             // Duplicate avoid karo (same first element repeat na ho)
//             if (i > 0 && nums[i] == nums[i - 1]) {
//                 continue;
//             }

//             int n1 = nums[i];

//             // Target banega → -nums[i]
//             int target = -n1;

//             // Baaki array me 2 numbers dhoondo jo target banaye
//             twosum(nums, target, i + 1, n - 1, result);
//         }

//         return result;
//     }
// };


// Time Complexity
// “Sort O(n log n) → har element pe 2-pointer O(n) → total O(n²)”
// Space Complexity
// “Auxiliary space O(1) → sirf pointers + variables, output ke alawa”
// “Output store karne ke liye O(k) → jahan k = number of triplets”