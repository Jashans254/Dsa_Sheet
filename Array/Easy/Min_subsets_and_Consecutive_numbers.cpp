//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int numOfSubset(vector<int> &arr) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int count = 1;
        for(int i = 0 ; i<arr.size()-1;i++)
        {
            if(arr[i+1] != arr[i]+1)
            {
                count++;
            }
        }
        return count;
    }
};

