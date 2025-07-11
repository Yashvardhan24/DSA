class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low <= high)
        {
            int mid = (low + (high-low)/2);
            if(arr[mid] == target)
            {
                return true;
            }
            if(arr[low] == arr[mid] && arr[mid] == arr[high])
            {
                low = low+1;
                high = high-1;
                continue;
            }
            if(arr[low] <= arr[mid])
            {
                if(arr[low] <= target && arr[mid] >= target)
                {
                    high = mid-1;
                }
                else
                {
                    low = low+1;
                }
            }
            if(arr[mid] <= arr[high])
            {
                if(arr[mid] <= target && arr[high] >= target)
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }
        return false;
    }
};
