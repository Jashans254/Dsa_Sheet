//Learning here ; pair data structure , INT_MAX ,INT_MIN
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int min = INT_MAX;
        int max = INT_MIN;
        for(int i = 0 ; i<arr.size();i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
            }
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
        pair<int , int > p1 = make_pair(min , max);
        return p1;
    }
};

