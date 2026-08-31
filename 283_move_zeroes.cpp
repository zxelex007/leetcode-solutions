class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp = nums;
        int count = 0;
        for (int i = 0 ; i < nums.size();i++){
            if (temp[i] == 0){
                count++;
            }
        }
        std::erase(nums,0);
        nums.insert(nums.end(), count, 0);
    }
};