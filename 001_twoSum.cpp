//==============================================================================
// 1. Tow Sum
// C++
// Tag: Array
//==============================================================================
// Summary:
// https://leetcode.com/problems/two-sum/#/description

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> tables;
        vector<int> res;
        
        for (int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];
            if (tables.find(difference) != tables.end()) {
                res.push_back(tables[difference]);
                res.push_back(i);
            }
            tables[nums[i]] = i;
        }
        
        return res;
    }
};
