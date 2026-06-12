class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> result;
        int count = 1;
        for (int i = 0; i < chars.size(); i++) {
            if (i + 1 < chars.size() && chars[i] == chars[i + 1])
                count++;
            else {
                result.push_back(chars[i]);
                if (count > 1) {
                    string num = to_string(count);
                    for (char c : num)
                        result.push_back(c);
                }
                count = 1;
            }
        }
        chars = result;
        return chars.size();
    }
};