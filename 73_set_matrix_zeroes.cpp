class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
 
        // An empty matrix has no row or column to update.
        if (rows == 0) {
            return;
        }
 
        int cols = matrix[0].size();
        vector<bool> zeroRows(rows, false);
        vector<bool> zeroCols(cols, false);
 
        // Record every row and column that contains an original zero.
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                // A zero marks both its row and its column.
                if (matrix[row][col] == 0) {
                    zeroRows[row] = true;
                    zeroCols[col] = true;
                }
            }
        }
 
        // Apply the stored row and column markers to the matrix.
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                // A cell becomes zero when its row or column was marked.
                if (zeroRows[row] || zeroCols[col]) {
                    matrix[row][col] = 0;
                }
            }
        }

    }
};