// Time Complexity
// Best Case: O(1) , Average Case: O(n) ,Worst Case: O(n)

//Applications of sequential search
// unsorted array ; small data set ; simple implementation
class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(vector<int>& arr, int x) {

        // Your code here
        for(int i= 0 ; i<arr.size();i++)
        {
            if(arr[i]==x)
            {
                return i ;
            }
        }
        return -1;
    }
};
