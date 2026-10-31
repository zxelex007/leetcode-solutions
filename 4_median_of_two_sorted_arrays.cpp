#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        // Ensure nums1 is the smaller array to minimize binary search steps
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;

        while (low <= high) {
            int i = (low + high) / 2;
            int j = (m + n + 1) / 2 - i;

            int maxLeftA = (i == 0) ? INT_MIN : nums1[i - 1];
            int minRightA = (i == m) ? INT_MAX : nums1[i];

            int maxLeftB = (j == 0) ? INT_MIN : nums2[j - 1];
            int minRightB = (j == n) ? INT_MAX : nums2[j];

            // Check if partitions are correct
            if (maxLeftA <= minRightB && maxLeftB <= minRightA) {
                // If total length is odd
                if ((m + n) % 2 != 0) {
                    return std::max(maxLeftA, maxLeftB);
                }
                // If total length is even
                return (std::max(maxLeftA, maxLeftB) + std::min(minRightA, minRightB)) / 2.0;
            } 
            else if (maxLeftA > minRightB) {
                high = i - 1; // Too many elements from nums1, shift left
            } 
            else {
                low = i + 1;  // Too few elements from nums1, shift right
            }
        }

        return 0.0;
    }
};