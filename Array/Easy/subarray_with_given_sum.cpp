//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        
        int start = 0 , end = 0 , sum = 0 ;
        while (end < arr.size()) {
            // Expand the window
            sum += arr[end];

            // Shrink the window if sum exceeds target
            while (sum > target && start <= end) {
                sum -= arr[start];
                start++;
            }

            // If sum matches the target, return 1-based indices
            if (sum == target) {
                return {start + 1, end + 1};
            }

            // Move the end pointer
            end++;
        }

        // No valid subarray found
        return {-1};
    }
};



