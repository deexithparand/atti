//  Refer For Plan https://gist.github.com/deexithparand/efcb680d363367d78ef07590be0cdc3a

// Max Sum Subarray of size K

// Pattern : can clearly see it's a fixed window size

// we already know the size of window

// problem link : (https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/)

// technique : hashmap size == k (distinct elements required in subarray)

// solution 
class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
        unordered_map<int,int> hm;
        long long window_sum=0, max_sum=INT_MIN, len=arr.size();

        // first window sum
        for(int i=0; i<k; i++){
            window_sum += arr[i];
            hm[arr[i]]++;
        }

        if(hm.size() == k){
            max_sum = max(window_sum, max_sum);
        }

        // get all window sum
        for(int i=k; i<len; i++){

            // remove elements from map
            hm[arr[i-k]]--;
            if(hm[arr[i-k]]==0){
                hm.erase(arr[i-k]);
            }

            window_sum -= arr[i-k];

            // add element to hm
            hm[arr[i]]++;
            window_sum += arr[i];

            if(hm.size() == k){
                max_sum = max(window_sum, max_sum);
            }
        }

        return max_sum==INT_MIN ? 0 : max_sum;
    }
};