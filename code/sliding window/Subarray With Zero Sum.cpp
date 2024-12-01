// reference https://gist.github.com/deexithparand/efcb680d363367d78ef07590be0cdc3a#1-fixed-size-window-problems

// Subarray with 0 sum

// Pattern : prefixsum + hashmap method 

// problem link : (https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card)

class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        int k=0, len=arr.size(), prefix_sum=0;
        
        unordered_map<int,int> ps_hm;
        
        for(int i=0; i<len; i++){
            prefix_sum += arr[i];
            
            int ps_minus_k = prefix_sum - k;
            
            if(ps_minus_k == 0) return true;
            
            if(ps_hm[ps_minus_k] > 0) return true;
            
            ps_hm[prefix_sum]++;
        }
        
        return false;
    }
};