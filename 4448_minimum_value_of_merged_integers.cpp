class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans = INT_MAX;
        for (int i = 1 ; i < nums.size() ; i+=2){
            string s1 = to_string(nums[i]);
            string s2 = to_string(nums[i-1]);
            string s3 = s2 + s1;
            int n1 = std::atoi(s3.c_str());
            if (n1 < ans) ans = n1;
        }
        return ans;
    }
};