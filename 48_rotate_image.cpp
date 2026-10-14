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
    // Transposing a matrix 
    int n = matrix.size();
    for(int i = 0 ; i < n ; i++){
        vector<int> temp;
        for (int j = n - 1 ;j >= 0 ; j-- ){
            temp.emplace_back(matrix[j][i]);
            std::cout << matrix[j][i];
        }
        //std::cout << temp;
        matrix.emplace_back(temp);
        temp.clear();
    }
    matrix.erase(matrix.begin(),matrix.begin() + n);
    }
};