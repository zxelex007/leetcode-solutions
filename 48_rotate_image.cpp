class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    /* BRUTE FORCE
    vector<vector<int>> ans;
    for(int i = 0 ; i < matrix.size() ; i++){
        vector<int> arr;
        for(int j = matrix.size() - 1; j >= 0; j--){
            arr.emplace_back(matrix[j][i]);
        }
        ans.emplace_back(arr);
        arr.clear();
    }
    */
    int n = matrix.size();
    /*
     Transposing a matrix -- Method 1:
    
    for(int i = 0 ; i < n ; i++){
        vector<int> temp;
        for (int j = n - 1 ;j >= 0 ; j-- ){
            temp.emplace_back(matrix[j][i]);
            std::cout << matrix[j][i];
        }
        matrix.emplace_back(temp);
        temp.clear();
    }
    matrix.erase(matrix.begin(),matrix.begin() + n);
    */
    // Transpose the matrix by swapping across the main diagonal.
    for (int row = 0; row < n; row++) {
        for (int col = row + 1; col < n; col++) {
            swap(matrix[row][col], matrix[col][row]);
        }
    }
    // Reverse every row to complete the clockwise rotation.
    for (int row = 0; row < n; row++) {
        reverse(matrix[row].begin(), matrix[row].end());
    }
    }
};