class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return {};
        }
 
        vector<int> order;
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
 
        // Process one remaining rectangular layer at a time.
        while (top <= bottom && left <= right) {
            // Collect the current top row from left to right.
            for (int col = left; col <= right; col++) {
                order.push_back(matrix[top][col]);
            }
            top++;
 
            // Collect the current right column from top to bottom.
            for (int row = top; row <= bottom; row++) {
                order.push_back(matrix[row][right]);
            }
            right--;
 
            // A bottom row remains only if the top boundary has not crossed it.
            if (top <= bottom) {
                // Collect the current bottom row from right to left.
                for (int col = right; col >= left; col--) {
                    order.push_back(matrix[bottom][col]);
                }
                bottom--;
            }
 
            // A left column remains only if the right boundary has not crossed it.
            if (left <= right) {
                // Collect the current left column from bottom to top.
                for (int row = bottom; row >= top; row--) {
                    order.push_back(matrix[row][left]);
                }
                left++;
            }
        }
 
        return order;
    }
};