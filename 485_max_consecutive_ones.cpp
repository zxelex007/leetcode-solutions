class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // assuming the breaking point of streak to be 0
        int count = 0;
        int max = 0;
        for (int i = 0;i < nums.size();i++){
            if (nums[i] == 1) count ++;
            else{ 
                count = 0;
            }
            if (max < count) max  = count;
        }
        return max;
    }
};