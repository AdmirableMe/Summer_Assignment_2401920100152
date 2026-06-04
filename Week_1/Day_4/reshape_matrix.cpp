class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> result(r, vector<int>(c));

        if (m*n == r*c) {
            for (int k = 0; k < m*n; k++) {
                int old_r = k / n;
                int old_c = k % n;

                int new_r = k / c;
                int new_c = k % c;

                result[new_r][new_c] = mat[old_r][old_c];
            }
            return result;
        }
        return mat;
    }
};