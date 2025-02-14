// approach 1
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
         vector<int> ans;
        int i = 0, j = 0;
        int lastnode = INT_MIN;  // To track the last inserted element

        while (i < a.size() && j < b.size()) {
            while (i < a.size() && a[i] == lastnode) i++;  // Skip duplicates in a
            while (j < b.size() && b[j] == lastnode) j++;  // Skip duplicates in b
            
            if (i < a.size() && (j == b.size() || a[i] < b[j])) {
                ans.push_back(a[i]);
                lastnode = a[i];
                i++;
            } else if (j < b.size() && (i == a.size() || a[i] > b[j])) {
                ans.push_back(b[j]);
                lastnode = b[j];
                j++;
            } else {  // When a[i] == b[j], insert one and move both pointers
                ans.push_back(a[i]);
                lastnode = a[i];
                i++;
                j++;
            }
        }

        // Handle remaining elements in a
        while (i < a.size()) {
            if (a[i] != lastnode) {
                ans.push_back(a[i]);
                lastnode = a[i];
            }
            i++;
        }

        // Handle remaining elements in b
        while (j < b.size()) {
            if (b[j] != lastnode) {
                ans.push_back(b[j]);
                lastnode = b[j];
            }
            j++;
        }

        return ans;
    }
};



// some clearing in the code
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        
        vector<int>ans;
        int i = 0 , j = 0 , lastnode = INT_MIN;
        
        while(i<a.size() || j<b.size())
        {
            int valA = (i < a.size()) ? a[i] : INT_MAX;  
            int valB = (j < b.size()) ? b[j] : INT_MAX;
            
            // as we are only going to push the value which is smaller , int_max ensures 
            // if either of array is exhausted then , it doesnt get pushes
             if (valA == lastnode) {
                i++;  // Skip duplicate in a
            } else if (valB == lastnode) {
                j++;  // Skip duplicate in b
            } else if (valA < valB) {// move only array "a" pointer
                ans.push_back(valA);
                lastnode = valA;
                i++;
            } else if (valA > valB) {// move only array b pointer
                ans.push_back(valB);
                lastnode = valB;
                j++;
            } else {  // valA == valB // push one value of either one and move both pointers
                ans.push_back(valA);
                lastnode = valA;
                i++;
                j++;
            }
        }
        
        return ans;
    }
    
};


