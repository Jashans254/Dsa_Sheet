// Memory Management: Compilers and OS use similar partitioning to segregate data (e.g., hot, warm, and cold data caches).
// Machine Learning: Label categorization when dealing with three categories of data.
// Data Segregation: Sorting large logs with predefined categories for quick lookup.
// //{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int c0=0, c1=0,c2=0;
        for(int i = 0 ; i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                c0++;
            }
            else if(arr[i]==1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        int i = 0;
        while (c0--) arr[i++] = 0;
        while (c1--) arr[i++] = 1;
        while (c2--) arr[i++] = 2;
    }
};


//Alternative 
// Dutch National Flag Algorithm 🇳🇱

// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int low = 0 , high = arr.size()-1, mid= 0;
         while (mid <= high) {
            if (arr[mid] == 0) {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            } else if (arr[mid] == 1) {
                mid++;
            } else { // arr[mid] == 2
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};

//{ Driver Code Starts.
