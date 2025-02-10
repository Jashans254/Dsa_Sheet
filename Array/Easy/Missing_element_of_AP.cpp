// concept to learn here is : use of temp array : O(n) time
// alternative approach uses a stack pos and neg
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        vector<int>arrPositive;
        vector<int>arrNegative;
        //int  p = 0 , n = 0 ;
        for(int i = 0 ; i<arr.size() ; i++)
        {
            if(arr[i]>=0)
            {
                arrPositive.push_back(arr[i]);
            }
            else
            {
                arrNegative.push_back( arr[i]);
            }
        }
        
        for(int i = 0 ;i<arrPositive.size();i++)
        {
                arr[i] = arrPositive[i];
        }
        int j = 0 ;
        for(int i= arrPositive.size();i<arr.size();i++)
        {
            arr[i] = arrNegative[j];
            j++;
        }
        
    }
};
