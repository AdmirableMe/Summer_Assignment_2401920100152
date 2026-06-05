class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int maxlen = strs[0].length();
        string str = "";
        
        for (int i = 0; i < maxlen; i++) {
            int c = 0;

            for (int j = 0; j < strs.size() - 1; j++) {
                if (strs[j][i] == strs[j + 1][i])
                    c++;
            }

            if (c == strs.size() - 1)
                str += strs[0][i];
            else
                break;
        }

        return str;
    }
};