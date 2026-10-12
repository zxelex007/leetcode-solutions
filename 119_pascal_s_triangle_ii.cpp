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
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for (int x = 0 ; x < rowIndex ; x++){
            ans.push_back(getNcR(rowIndex,x));
        }
        ans.emplace_back(1);
        return ans;
    }
};