class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /* Brute  Force Solution :
        int sum = 0;
        int max = -10000;
        for(int i = 0 ; i< nums.size();i++){
            sum = 0;
            for (int j = i;j < nums.size();j++){
                sum+=nums[j];
                if (sum > max){
                    max = sum;
                }
            }
        }
        return max;
        */


        // Optimal Solution : 
        int max = -100000;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];

            if (sum > max) max = sum;

            if (sum < 0) {
                sum = 0;
            }

        }
        return max;
        

    }
};