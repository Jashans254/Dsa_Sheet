// my approach




class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int d = min((arr[1]-arr[0]),(arr[2]-arr[1]));
        int dConst = d;
            for(int i = 1 ; i<arr.size();i++)
            {
                if(arr[i]!=arr[0]+d)
                {
                    return arr[0]+d;
                }
                d= d + dConst;
            }
    }
};


// better approach : use maths
//sum of all elements 
// C++ program to find the missing number
// in a given arithmetic progression
#include <iostream>
#include <vector>
using namespace std;
int findMissing(vector<int> &arr) {
    int n = arr.size(), s;
    int a = arr[0];
    int l = arr[n - 1];

    // Calculate the expected sum of the progression
    if ((a + l) % 2 == 0) {
        s = (a + l) / 2;
        s = s * (n + 1);
    } else {
        s = (n + 1) / 2;
        s = (a + l) * s;
    }
      
    // Calculate the sum of all elements in the array
      int sum = 0;
    for (int i = 0; i <= n - 1; i++) {
        sum = sum + arr[i];
    }
    return s - sum;
}

int main() {
    vector<int> arr = {2, 4, 8, 10, 12, 14};
    cout << findMissing(arr);
    return 0;
}


// more better : binary search : O(logn)

class Solution {
    public:
      // A binary search based recursive function that returns
      // the missing element in arithmetic progression
      int findMissingUtil(vector<int> arr, int low, int high, int diff) {
          if (high <= low)
              return INT_MAX;
  
          int mid = low + (high - low) / 2;
  
          // The element just after the middle element is missing.
          // The arr[mid+1] must exist, because we return when
          // (low == high) and take floor of (high-low)/2
          if (arr[mid + 1] - arr[mid] != diff)
              return (arr[mid] + diff);
  
          // The element just before mid is missing
          if (mid > 0 && arr[mid] - arr[mid - 1] != diff)
              return (arr[mid - 1] + diff);
  
          // If the elements till mid follow AP, then recur
          // for right half
          if (arr[mid] == arr[0] + mid * diff)
              return findMissingUtil(arr, mid + 1, high, diff);
  
          // Else recur for left half
          return findMissingUtil(arr, low, mid - 1, diff);
      }
  
      int findMissing(vector<int> &arr) {
          int n = arr.size();
          int diff = (arr[n - 1] - arr[0]) / n;
          return findMissingUtil(arr, 0, n - 1, diff);
      }
  };

