class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;
        for(int num : st){
            if(num == INT_MIN || !st.count(num - 1)){
                
                int currNum = num;
                int count = 1; 
                while(currNum != INT_MAX && st.count(currNum + 1)){
                    currNum++;
                    count++;
                }
                longest = max(longest, count);
            }            
        }
        return longest;
    }
};