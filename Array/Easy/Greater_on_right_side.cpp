// brute force: o(n²)
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    /* Function to replace every element with the
    next greatest element */
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        for(int i = 0 ; i<arr.size()-1;i++)
        {
            int maxRight = arr[i+1];
            for(int j = i+1;j<arr.size();j++)
            {
                maxRight = max(arr[j], maxRight);
            }
            arr[i]= maxRight;
        }
        arr[arr.size()-1]= -1;
        return arr;
    }
};



// approach ; traverse from right to left: O(n)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    /* Function to replace every element with the
    next greatest element */
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        int n = arr.size();
        int maxRight = -1 ;
        for(int i = n-1 ; i>=0; i--)
        {
            int temp = arr[i];
            arr[i] = maxRight;
            maxRight = max(temp , maxRight);
        }
        
        return arr;
    }
};

