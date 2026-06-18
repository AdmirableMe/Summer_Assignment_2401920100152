class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int result;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
                s.push(stoi(tokens[i]));
            else {
                int num2 = s.top();
                s.pop();
                int num1 = s.top();
                s.pop();
                if (tokens[i] == "+") 
                    result = num1 + num2;
                else if (tokens[i] == "-") 
                    result = num1 - num2;
                else if (tokens[i] == "*") 
                    result = num1 * num2;
                else 
                    result = num1 / num2;
                s.push(result);
            }
        }
        return s.top();
    }
};