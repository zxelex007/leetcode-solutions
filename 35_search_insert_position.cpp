class Solution {
public:
    int searchInsert(vector<int>& arr, int x) {
        /*         using STL library
        int lb = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
        return lb;
        */

        // Left boundary of the current search range.
        int low = 0;
 
        // Right boundary of the current search range.
        int high = (int)arr.size() - 1;
 
        // Starts as arr.size() so it remains correct when no lower bound exists.
        int answer = (int)arr.size();
 
        // Keep searching while a valid range still exists.
        while (low <= high) {
            // Calculate the middle index safely.
            int mid = low + (high - low) / 2;
 
            // This index is valid, so store it and try to find an earlier one.
            if (arr[mid] >= x) {
                answer = mid;
                high = mid - 1;
            } else {
                // Values up to mid are too small, so move to the right half.
                low = mid + 1;
            }
        }
 
        return answer;
    }
};