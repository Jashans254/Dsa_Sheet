//just use binary search
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& arr, int target) {
            if (arr.empty() || arr[0].empty()) return false; // Handle empty matrix case
    
            for(int i = 0 ; i<arr.size();i++)
            {
            int start = 0 , end = arr[i].size()-1 , mid;
            while(start<=end)
            {
                mid = start + (end-start)/2;
                if(arr[i][mid] == target)
                {
                    return 1;
                }
                else if(arr[i][mid]<target)
                {
                    start = mid +1;
                }
                else
                {
                    end = mid -1;
                }
            }
            }
            return 0;
        }
    };