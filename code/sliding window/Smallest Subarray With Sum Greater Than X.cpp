//  Refer For Plan https://gist.github.com/deexithparand/efcb680d363367d78ef07590be0cdc3a

// Smallest Subarray With Sum Greater Than X

// Pattern : can clearly see it's a variable window size

// variable window size

// problem link : (https://www.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card)

// technique : messy edge case to be handled, in sliding window - should check for better approach

// solution
class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int min_len=INT_MAX, left=0, len=arr.size(), run_sum=0, right=0;
            
        for(right=0; right<len; right++){
            run_sum += arr[right];
            
            
            while(run_sum > x && left < right){
                min_len = min(min_len, right-left+1);
                run_sum -= arr[left];
                left++;
            }
            
            // missed this edge case
            // 1
            // 0 1 10000
            if(left==right && run_sum>x){
                min_len = min(min_len, right-left+1);
            }
        }
        
        return (min_len==INT_MAX) ? 0 : min_len;
    }
};