class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> hash1(26, 0);
        vector<int> hash2(26, 0);

        if (s1.length() > s2.length())
            return false;

        for (int i = 0; i < s1.length(); i++) {
            hash1[s1[i] - 'a']++;
            hash2[s2[i] - 'a']++;
        }

        if (hash1 == hash2)
            return true;

        int l = 0;
        for (int r = s1.length(); r < s2.length(); r++) {
            hash2[s2[r] - 'a']++;
            hash2[s2[l] - 'a']--;
            l++;

            if (hash1 == hash2) 
                return true;
        }

        return false;

    }
};