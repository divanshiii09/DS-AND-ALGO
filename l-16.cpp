// class Solution {
// public:
//     int threeSumClosest(vector<int>& nums, int target) {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();

//         int closestSum = 0;
//         int diff = INT_MAX;

//         for (int k = 0; k <= n - 3; k++) {
//             int i = k + 1;
//             int j = n - 1;

//             while (i < j) {
//                 int sum = nums[k] + nums[i] + nums[j];

//                 // agar ye sum target ke zyada paas hai
//                 if (abs(sum - target) < diff) {
//                     diff = abs(sum - target);
//                     closestSum = sum;
//                 }

//                 // pointer movement
//                 if (sum < target) {
//                     i++; // sum badhana hai
//                 } else if (sum > target) {
//                     j--; // sum kam karna hai
//                 } else {
//                     return sum; // exact match mil gaya
//                 }
//             }
//         }

//         return closestSum;
//     }
// };


// ⏱️ Time Complexity (TC)

// 👉 O(n²)

// Sorting → O(n log n)
// Outer loop (k) → O(n)
// Inner two-pointer (i, j) → O(n)

// 👉 Overall:

// O(n log n + n²) ≈ O(n²)
// 💾 Space Complexity (SC)

// 👉 O(1) ✅

// No extra data structures used
// Sorting is in-place (ignoring recursion stack)