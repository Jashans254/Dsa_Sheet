// concept to be learned here is : sorting of array
// it takes O(nlogn) time
// alternative approach : Hashing : O(n) time complexity

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        
        //get  the size of arrays
        int sizeA = a.size() , sizeB = b.size();
        
        // condition check ; if size of array are not equal then just return false
        if(sizeA!=sizeB) return false;
        sort(a.begin() , a.end());//sort array "a"
        sort(b.begin() , b.end()); // sort array "b"
        
        // just iterate over the array
        for( int i = 0 ;i<sizeA; i++)
        {
            if(a[i]!=b[i])// mismatch
            {
                return false;
            }
        }
        
        // if after iterating no mismatch was found
        return true;
    }
};
