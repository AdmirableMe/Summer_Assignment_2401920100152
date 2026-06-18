class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size(), 0);
        stack<int> s;

        for (int i = 0; i < temperatures.size(); i++) {
            while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
                int index = s.top();
                s.pop();
                answer[index] = i - index;
            }
            s.push(i);
        }

        return answer;
    }
};