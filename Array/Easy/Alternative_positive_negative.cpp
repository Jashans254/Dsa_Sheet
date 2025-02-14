//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        
        vector<int>arrP;
        vector<int>arrN;
        
        for(int i = 0 ; i<arr.size();i++)
        {
            if(arr[i]>=0)
            {
                arrP.push_back(arr[i]);
            }
            else
            {
                arrN.push_back(arr[i]);
            }
        }
        int p = 0, n = 0 , i=0;
        
        while (p < arrP.size() && n < arrN.size()) {
            arr[i++] = arrP[p++];
            arr[i++] = arrN[n++];
        }

        // Step 3: Append remaining elements (if any)
        while (p < arrP.size()) arr[i++] = arrP[p++];
        while (n < arrN.size()) arr[i++] = arrN[n++];
    }
};

