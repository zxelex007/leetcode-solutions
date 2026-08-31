class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> temp = nums;
        for (int i = 0; i<nums.size();i++){
            std::erase(temp,nums[i]);
            if ((nums.size() - temp.size()) == 1) return nums[i];
            temp = nums;
        }
        return nums[0];
    }
};