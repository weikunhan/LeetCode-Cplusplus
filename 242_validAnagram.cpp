//==============================================================================
// 242. Valid Anagram
// C++
// Tag: String(Hash Tables)
//==============================================================================
// Summary:
// https://leetcode.com/problems/different-ways-to-add-parentheses/description/

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> tables;
        bool res = false;
        
        if (s.size() != t.size()) {
            return res;
        }
        
        for (int i = 0; i < s.size(); ++i) {
            ++tables[s[i]];  
            --tables[t[i]];
        }
        
        for (auto n:tables) {
            if (n.second) {
                return res;
            }
        }
        
        return res = true;
    }
};
