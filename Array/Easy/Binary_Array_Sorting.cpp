// brute force approach : O(n²); passed 1110 test cases 

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
        for(int i = 0 ; i<arr.size(); i++)
        {
            if( arr[i]==1)
            {
                for(int j = i+1 ; j<arr.size();j++)
                {
                    if(arr[j]==0 )
                    {
                        swap(arr[i],arr[j]);
                    }
                }
            }
        }
    }
};


// two pointer approach : O(n)


// } Driver Code Ends
class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
        int i = 0 ;//starting pointer
        int j = arr.size()-1 ; //ending pointer
        
        while(i<j)
        {
            if(arr[i]== 1 && arr[j]==0)
            {
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            if(arr[i]==0)//increment the starting pointer if it is 0 ; so no swapping is needed as left sise is already 0 
            {
                i++;
            }
            if(arr[j]==1)// decrement the ending pointer if it is 1 , as we need 1 at right ; so no swap needed
            {
                j--;
            }
            
        }
    }
};


// another approach ; lets count 
void binSort(vector<int> &arr) {
    int count_zeros = count(arr.begin(), arr.end(), 0);
    
    // Fill first 'count_zeros' elements with 0
    fill(arr.begin(), arr.begin() + count_zeros, 0);
    
    // Fill the rest with 1
    fill(arr.begin() + count_zeros, arr.end(), 1);
}



