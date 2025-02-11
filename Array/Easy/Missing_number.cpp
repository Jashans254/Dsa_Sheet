//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
        long n = arr.size()+1;
        
        long long sum = (n * (n + 1)) / 2;
        long long sumArr = 0 ;
        for(int i = 0  ; i<arr.size(); i++)
        {
            sumArr+=arr[i];
        }
        
        return int(sum - sumArr);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends

// alternatively
//Back-end complete function template for C++
class Solution {
    public:
      int missingNumber(vector<int>& arr) {
          int n = arr.size() + 1;
          int xor1 = 0, xor2 = 0;
  
          // XOR all array elements
          for (int i = 0; i < n - 1; i++) {
              xor2 ^= arr[i];
          }
  
          // XOR all numbers from 1 to n
          for (int i = 1; i <= n; i++) {
              xor1 ^= i;
          }
  
          // Missing number is the XOR of xor1 and xor2
          return xor1 ^ xor2;
      }
  };