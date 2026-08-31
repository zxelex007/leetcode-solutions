class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> temp = nums;
        if (nums.size() <= 1) return;
        k = k % nums.size();
        for (int i = 0;i<nums.size();i++){
            if (i+k < nums.size()){
            nums[i+k] = temp[i];
            }
            else nums[i+k-nums.size()] = temp[i];
        }
    }
};