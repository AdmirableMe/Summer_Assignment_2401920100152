class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i = mat.size();
        int sum = 0;
        while (i) {
            sum += mat[i-1][i-1];
            sum += mat[i-1][mat.size() - i];
            i--;
        }
        if (mat.size() % 2 == 1) {
            int mid = mat.size() / 2;
            sum -= mat[mid][mid];
        }
        return sum;
    }
};