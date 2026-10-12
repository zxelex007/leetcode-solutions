class Solution {
public:
    int getNcR(int n,int r){
        long long res = 1;
        for(int i = 0 ; i < r; i++){
            res = res * (n - i);
            res = res / (i + 1);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
    /* 

    Brute force 

    vector<vector<int>> ans = {{1}};
    int x = 0;
    while (ans.size() != numRows) {
        vector<int> arr;
        arr.push_back(1);
        for (int i = 0; i  < ans[x].size() - 1 ; i++){
            arr.push_back(ans[x][i] + ans[x][i+1]);
        }
        arr.push_back(1);
        ans.push_back(arr);
        arr.clear();
        x++;
    }
    return ans;
    */

    // Optimal Solution
    vector<vector<int>> ans = {};
    for (int x = 0; x < numRows; x++){
        vector<int> row;
        for (int j = 0 ; j < x ; j++){
            row.push_back(getNcR(x,j));
        }
        row.emplace_back(1);
        ans.emplace_back(row);
    }
    return ans;
    }
};