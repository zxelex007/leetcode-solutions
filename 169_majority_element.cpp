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
        /* Moore's Voting Algorithm :
        
        // Size of the given array
        int n = nums.size();
        
        // Count
        int cnt = 0;
        
        // Element
        int el; 
        
        // Applying the algorithm
        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                cnt = 1;
                el = nums[i];
            } else if (el == nums[i]) {
                cnt++;
            } else {
                cnt--;
            }
        }
        
        Checking if the stored element
        is the majority element
        
        int cnt1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == el) {
                cnt1++;
            }
        }
        
        //return element if it is a majority element
        if (cnt1 > (n / 2)) {
            return el;
        }
        
        //return -1 if no such element found
        return -1;
        */
    }
};