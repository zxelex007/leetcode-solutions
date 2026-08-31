class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for (int i = 0;i < nums.size();i++){
            auto it = std::find(nums.begin()+i+1,nums.end(),target-nums[i]);
            if (it != nums.end()){
                ans.push_back(i);
                int index = std::distance(nums.begin(), it);
                ans.push_back(index);
                break;
            }
        }
        return ans;
    }
};