class Solution {
public:
    int search(vector<int>& nums, int x) {
        // Left boundary of the current search range.
        int low = 0;
 
        // Right boundary of the current search range.
        int high = nums.size() - 1;
 
        // Keep searching while a valid range still exists.
        while (low <= high) {
            // Calculate the middle index safely.
            int mid = low + (high - low) / 2;
 
            // If the middle value matches x, the answer is found.
            if (nums[mid] == x) {
                return mid;
            }
 
            // If x is larger, search only in the right half.
            if (nums[mid] < x) {
                low = mid + 1;
            } else {
                // If x is smaller, search only in the left half.
                high = mid - 1;
            }
        }
 
        return -1;
    }
};