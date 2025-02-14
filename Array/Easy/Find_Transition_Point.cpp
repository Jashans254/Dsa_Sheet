//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        if(arr[0] ==1 ) return 0 ;
        for(int i = 0 ;i<arr.size();i++)
        {
            if(arr[i]== 0 && arr[i+1] ==1)
            {
                return i+1;
            }
        }
        
        return -1;
    }
};
