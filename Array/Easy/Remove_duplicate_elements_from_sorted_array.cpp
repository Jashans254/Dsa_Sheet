// brute force approach
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        
        int i = 0 , j = arr.size()-1;
        while (i < arr.size()) {
            int j = arr.size() - 1;  // Reset j for each i
            
            while (j > i) {  // Compare only elements after i
                if (arr[i] == arr[j]) {
                    arr.erase(arr.begin() + j); // Remove arr[j]
                }
                j--; // Move j left
            }
            
            i++; // Move to next element
        }
        
        
        return arr.size();
    }
};

// optimized approach
class Solution {
    public:
      int removeDuplicates(vector<int> &arr) {
          int n = arr.size();
          if (n == 0) return 0; // Edge case: Empty array
          
          int i = 0; // Slow pointer
          
          for (int j = 1; j < n; j++) { // Fast pointer
              if (arr[i] != arr[j]) {
                  i++; 
                  arr[i] = arr[j]; // Overwrite duplicate values
              }
          }
          
          return i + 1; // New size of unique elements
      }
  };