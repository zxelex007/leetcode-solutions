class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*
        vector <int> temp = nums;
        for (int i = 0 ; i < nums.size();i++){
            std::erase(temp,nums[i]); //  removes all occurrences of nums[i]
            if (nums.size() - temp.size() > nums.size() / 2) return nums[i];
        }
        return 0;
        */

        // Optimised solution -
        std::sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};