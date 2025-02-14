// brute force

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector<int> visited(leaves + 1, 0);  // Initialize all leaves as unvisited
        
        for (int i = 0; i < N; i++) {
            int leaves_count = frogs[i];  // Start from the first jump of this frog
            while (leaves_count <= leaves) {
                visited[leaves_count] = 1;  // Mark as visited
                leaves_count += frogs[i];   // Move to next multiple
            }
        }
        
        int count = 0;
        for (int i = 1; i <= leaves; i++) {
            if (visited[i] == 0) {  // Count unvisited leaves
                count++;
            }
        }
        
        return count;
    }
};



// alternative; iterate jump ; and also maintain a boolean visited array; also dont visited already visited
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector<bool> visited(leaves + 1, false);  // Initialize all leaves as unvisited
        
        for (int i = 0; i < N; i++) {
            int jump = frogs[i];
            if (jump <= leaves && !visited[jump]) {  // Avoid redundant work
                for (int j = jump; j <= leaves; j += jump) {
                    visited[j] = true;  // Mark multiples as visited
                }
            }
        }
        
        int count = 0;
        for (int i = 1; i <= leaves; i++) {
            if (!visited[i]) {  // Count unvisited leaves
                count++;
            }
        }
        
        return count;
    }
};



//{ Driver Code Starts.


