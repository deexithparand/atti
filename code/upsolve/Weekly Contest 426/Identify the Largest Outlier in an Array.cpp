// class Solution {
// public:
//     int getLargestOutlier(vector<int>& nums) {
//         int sum=0, maxoutlier=INT_MIN;
//         for(auto i : nums) sum+=i;
//         unordered_map<int,int> hm;

//         for(int i=0; i<nums.size(); i++){
//             int outlier = nums[i];
//             if(hm[outlier]==1) continue;
//             hm[outlier]++;
//             for(int j=0; j<nums.size(); j++){
//                 if(i==j) continue;
//                 if(outlier + nums[j] == sum - nums[j]){
//                     maxoutlier = max(maxoutlier,outlier);
//                 } 
//             }
//         } 

//         return maxoutlier;
//     }
// };

// new approach compared to sliding window, still not good enough

// use binary search algo to find x
