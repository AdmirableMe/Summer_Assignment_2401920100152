class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int area;
        int most = 0;
        while (l < r) {
            area = (r-l) * min(height[l],height[r]);
            
            if (height[l] < height[r])
                l++;
            else
                r--;

            if (most < area)
                most = area;
        }

        return most;
    }
};