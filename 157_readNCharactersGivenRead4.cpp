//==============================================================================
// 157. Read N Characters Given Read4
// C++
// Tag: String
//==============================================================================
// Summary:
// https://leetcode.com/problems/read-n-characters-given-read4/description/

// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Maximum number of characters to read
     * @return    The number of characters read
     */
    int read(char *buf, int n) {
        char bufTmp[4];
        int res = 0;
        int tmp = 0;
        int index = 0;
        
        while (res < n) {
            if (index >= tmp) {
                index = 0;
                tmp = read4(bufTmp);
                if (tmp == 0) {
                    break;
                }
            }
            buf[res++] = bufTmp[index++];
        }        
        
        return res;
    }
};
