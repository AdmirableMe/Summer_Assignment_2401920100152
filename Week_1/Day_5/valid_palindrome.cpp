class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i = s.size() - 1; i >= 0; i--) {
            if (isalnum(s[i]))
                str += tolower(s[i]);
        }

        string rev = "";
        for(int i = str.size() - 1; i >= 0; i--) {
            rev += str[i];
        }

        return (str == rev);
    }
};