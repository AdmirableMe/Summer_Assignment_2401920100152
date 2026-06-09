class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if (p.length() > s.length())
            return result;
        vector<int> hash1(26, 0);
        vector<int> hash2(26, 0);

        for (int i = 0; i < p.length(); i++) {
            hash1[p[i] - 'a']++;
            hash2[s[i] - 'a']++;
        }
        if (hash1 == hash2)
            result.push_back(0);

        int l = 0;
        for (int r = p.length(); r < s.length(); r++) {
            hash2[s[r] - 'a']++;
            hash2[s[l] - 'a']--;
            l++;

            if (hash1 == hash2)
                result.push_back(l);
        }

        return result;
    }
};