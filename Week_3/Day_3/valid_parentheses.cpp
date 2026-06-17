class Solution {
public:
    bool isValid(string s) {
        char stack[10000];
        int top = -1;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[')
                stack[++top] = c;
            else {
                if (top == -1)
                    return false;
                char last = stack[top--];
                if ((c == ')' && last != '(') || (c == '}' && last != '{') || (c == ']' && last != '['))
                    return false;
            }
        }
        return (top == -1);
    }
};