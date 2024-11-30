// reference https://gist.github.com/deexithparand/efcb680d363367d78ef07590be0cdc3a#1-fixed-size-window-problems

// NO sliding window - non negative numbers included

// Prefix Sum + Hashmap Approach Pattern - involving sums of subarrays or dynamic window sizes

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // need
        int prefix_sum=0, cnt=0, len=nums.size();
        unordered_map<int,int> ps_hm;

        // storing {0,1} or when prefix_sum - k == 0 cnt++
        // ps_hm[prefix_sum]++;

        for(int i=0; i<len; i++){
            prefix_sum += nums[i];
            
            int ps_minus_k = prefix_sum - k;

            if(ps_minus_k == 0) {
                cnt++;
            } 
            
            cnt += ps_hm[ps_minus_k];

            ps_hm[prefix_sum]++; 
        }
        
        return cnt;
    }
};