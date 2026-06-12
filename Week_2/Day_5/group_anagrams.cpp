class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        for (int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            hash[temp].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for (auto i : hash)
            result.push_back(i.second);
        return result;
    }
};