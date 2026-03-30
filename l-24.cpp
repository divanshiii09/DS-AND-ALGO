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


//OPTIMIZED 2 POINTER AAPROACH 

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();

//         int left = 0;            // starting pointer
//         int right = n - 1;       // ending pointer

//         int leftMax = 0;         // left side ka max
//         int rightMax = 0;        // right side ka max

//         int water = 0;           // total water

//         while (left <= right) {

//             // agar left height chhoti hai
//             if (height[left] <= height[right]) {

//                 // agar current height bada hai → update leftMax
//                 if (height[left] >= leftMax) {
//                     leftMax = height[left];
//                 } else {
//                     // warna water store hoga
//                     water += leftMax - height[left];
//                 }

//                 left++; // left pointer aage badhao

//             } else {

//                 // agar right height chhoti hai
//                 if (height[right] >= rightMax) {
//                     rightMax = height[right];
//                 } else {
//                     // warna water store hoga
//                     water += rightMax - height[right];
//                 }

//                 right--; // right pointer peeche lao
//             }
//         }

//         return water;
//     }
// };

// ⏱️ Time Complexity (TC)

// 👉 O(n)

// Har element ko maximum ek baar visit karte hain
// left aur right pointers ek dusre ki taraf move karte hain
// Total iterations ≤ n
// 💾 Space Complexity (SC)

// 👉 O(1) ✅

// Koi extra array use nahi ho raha
// Sirf variables use ho rahe hain:
// left, right
// leftMax, rightMax
// water