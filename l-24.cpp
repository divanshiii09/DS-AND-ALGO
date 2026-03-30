// class Solution {
// public:

//     // Left max array banane ka function
//     vector<int> leftMax(vector<int>& height) {
//         int n = height.size();
//         vector<int> left(n);

//         // first element ka left max wahi khud hoga
//         left[0] = height[0];

//         // har index pe left side ka max store karo
//         for (int i = 1; i < n; i++) {
//             left[i] = max(left[i - 1], height[i]); // prev max vs current height
//         }

//         return left;
//     }

//     // Right max array banane ka function
//     vector<int> rightMax(vector<int>& height) {
//         int n = height.size();
//         vector<int> right(n);

//         // last element ka right max wahi khud hoga
//         right[n - 1] = height[n - 1];

//         // reverse loop me right side ka max store karo
//         for (int i = n - 2; i >= 0; i--) {
//             right[i] = max(right[i + 1], height[i]); // next max vs current height
//         }

//         return right;
//     }

//     int trap(vector<int>& height) {
//         int n = height.size();
//         if (n == 0) return 0; // edge case

//         // left aur right max arrays bana lo
//         vector<int> left = leftMax(height);
//         vector<int> right = rightMax(height);

//         int sum = 0;

//         // har index pe water calculate karo
//         for (int i = 0; i < n; i++) {
//             // min(left, right) - current height
//             sum += min(left[i], right[i]) - height[i];
//         }

//         return sum; // total trapped water
//     }
// };


// ✅ Time Complexity (TC)
// leftMax() → O(n)
// rightMax() → O(n)
// Final loop → O(n)

// 👉 Total TC = O(n)

// ✅ Space Complexity (SC)
// left array → O(n)
// right array → O(n)

// 👉 Total SC = O(n)