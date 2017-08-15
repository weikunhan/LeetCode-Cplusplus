//==============================================================================
// 238. Product of Array Except Self
// C++
// Tag: Array
//==============================================================================
// Summary:
// https://leetcode.com/problems/product-of-array-except-self/description/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int left = 1;
        int right = 1;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0) {
                left *= nums[i - 1];
            }
            res[i] = left;
        }
        
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (i < nums.size() - 1) {
                right *= nums[i + 1];
            }
            res[i] *= right;
        }
        
        return res;
    }
};
