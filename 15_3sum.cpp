class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        /*   BRUTE FORCE
        vector<vector<int>> ans;
        set<int> arr;
        for (int i = 0 ; i <= nums.size() - 3; i++){
            for(int j = i+1; j <= nums.size() - 2; j++){
                for(int k = j + 1; k < nums.size(); k ++ ){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        arr.push_back(nums[i]);
                        arr.push_back(nums[j]);
                        arr.push_back(nums[k]);
                        // std::sort(arr.begin(),arr.end());
                        auto it = std::find(ans.begin(), ans.end(), arr);
                        if (it == ans.end()) {
                            ans.emplace_back(arr);
                        }
                        arr.clear();
                    }
                }

            }
        }
        return ans;
        */

        // optimal solution
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum < 0) {
                    j++;
                }
                else if (sum > 0) {
                    k--;
                }
                else {
                    ans.push_back({nums[i], nums[j], nums[k]});

                    j++;
                    k--;

                    while (j < k && nums[j] == nums[j - 1])
                        j++;

                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }
        return ans;
    }
};