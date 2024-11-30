//  Refer For Plan https://gist.github.com/deexithparand/efcb680d363367d78ef07590be0cdc3a

// Max Sum Subarray of size K

// Pattern : can clearly see it's a fixed window size

// we already know the size of window

// problem link : (https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card)

// solution 
class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int len = arr.size(), window_sum=0, max_sum=INT_MIN;
        
        // find initial win_sum for window of first k
        for(int i=0; i<k; i++){
            window_sum+=arr[i];
        }
        
        max_sum = max(window_sum,max_sum);
        
        for(int i=k; i<len; i++){
            window_sum -= arr[i-k];
            window_sum += arr[i];
            max_sum = max(window_sum, max_sum);
        }

        return max_sum;
    }
};
