// concept is to understand use of temp variable and iterate from the last to first 
// understanding the indexing of the array

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int temp = arr[arr.size()-1];//fetch the last element
        
        for(int i = arr.size()-2 ; i>=0 ; i--)
        {
            arr[i+1] = arr[i]; 
            
        }
        arr[0] = temp;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.rotate(arr);
        for (long long i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends


// alternative approach
 // i and j pointing to first and last
    // element respectively
    int i = 0, j = n - 1;
    while (i != j) {
        swap(arr[i], arr[j]);
        i++;
    }
// Dry run as follows

// Input: arr[] = {1, 2, 3, 4, 5}
// Output: 5 1 2 3 4
// i= 0 ,j = 4 arr[i] = 1 , arr[j]= 5 : 1 2 3 4 5 
// i =1 , j= 4 arr[i] = 2 , arr[j] = 1 : 5 1 2 3 4
// i = 2 , j = 4 arr[i] = 3 , arr[j] = 2 : 5 2 3 4 1
// i = 3 , j = 4 arr[i] = 4 , arr[j] = 3 : 5 1 2 4 3
// i = 4 , j = 4 arr[i] = 4 , arr[j] = 4 : 5 1 2 3 4