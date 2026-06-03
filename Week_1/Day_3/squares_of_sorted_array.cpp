class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int back = r;
        vector<int> result(nums.size());

        while (l <= r) {
            if ( abs(nums[l]) >= abs(nums[r]) ) {
                result[back] = nums[l] * nums[l];
                l++;
            }
            else {
                result[back] = nums[r] * nums[r];
                r--;
            }
            back--;
        }

        return result;
    }
};