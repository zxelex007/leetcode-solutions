class Solution {
public:
    bool check(const vector<int>& arr, int m, int d) {
        int cnt = 1; // Start with the first day
        int sum = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            // If a single element is somehow greater than capacity, it's invalid
            if (arr[i] > m) return false; 
            
            if (sum + arr[i] > m) {
                cnt++;       // Need a new day
                sum = arr[i]; // Start the new day with the current weight
            } else {
                sum += arr[i];
            }
        }
        return cnt <= d;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = high;
        
        while (low <= high) {
            int mid = low + (high - low) / 2; // Prevents potential integer overflow
            if (check(weights, mid, days)) {
                ans = mid;
                high = mid - 1; // Try to find a smaller valid capacity
            } else {
                low = mid + 1;  // Capacity too small, increase it
            }
        } 
        return ans;
    }
};