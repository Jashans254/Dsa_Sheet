// conecpt learned ; out of bounds
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        
        // If the array has only one element, it's a peak
        if (n == 1) return 0;

        // Check first element
        if (arr[0] > arr[1]) return 0;

        // Check last element
        if (arr[n-1] > arr[n-2]) return n-1;

        // Check for peak in the middle
        for (int i = 1; i < n - 1; i++) { // Avoid out-of-bounds
            if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                return i; // Return index of peak element
            }
        }
        
        return 0; // No peak found (should not happen for valid input)
    }
};


// } Driver Code Ends