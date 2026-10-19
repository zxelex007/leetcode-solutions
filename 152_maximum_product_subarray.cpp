class Solution {
public:
    int maxProduct(vector<int>& nums) {
        /* Brute Force
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        long long maxProduct = nums[0];
                for (int start = 0; start < n; start++) {
            for (int end = start; end < n; end++) {
                long long currentProduct = 1;
 
                for (int index = start; index <= end; index++) {
                    currentProduct *= nums[index];
                }
 
                
                if (currentProduct > maxProduct) {
                    maxProduct = currentProduct;
                }
            }
        }
 
        return maxProduct;
        */
        int n = nums.size();
 
        // No non-empty subarray exists.
        if (n == 0) {
            return 0;
        }
 
        long long currentMax = nums[0];
        long long currentMin = nums[0];
        long long maxProduct = nums[0];
 
        for (int index = 1; index < n; index++) {
            long long currentValue = nums[index];
 
            /*
             * Preserve both previous states because
             * a negative value can swap their roles.
             */
            long long previousMax = currentMax;
            long long previousMin = currentMin;
 
            /*
             * Either start fresh or extend one of
             * the previous product subarrays.
             */
            currentMax = max({
                currentValue,
                previousMax * currentValue,
                previousMin * currentValue
            });
 
            currentMin = min({
                currentValue,
                previousMax * currentValue,
                previousMin * currentValue
            });
 
            // Record the best product found anywhere so far.
            if (currentMax > maxProduct) {
                maxProduct = currentMax;
            }
        }
 
        return maxProduct;
    }
};