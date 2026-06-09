class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, -1);
        int l = 0;
        int maxLen = 0;

        for (int r = 0; r < s.length(); r++) {
            if (hash[s[r]] >= l)
                l = hash[s[r]] + 1;

            hash[s[r]] = r;

            int currLen = r - l + 1;

            if (currLen > maxLen)
                maxLen = currLen;
        }

        return maxLen;
    }
};