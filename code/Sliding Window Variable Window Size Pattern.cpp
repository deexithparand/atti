//  Refer For Plan https://gist.github.com/deexithparand/efcb680d363367d78ef07590be0cdc3a

// Max Sum Subarray of size K

// Pattern : can clearly see it's a fixed window size

// variable window size

// problem link : (https://www.naukri.com/code360/problems/longest-sub-string-with-k-distinct-characters_920521)

// technique : left and right pointer and hashmap to store window properties

// solution 
#include <bits/stdc++.h> 
int getLengthofLongestSubstring(string s, int k) {
    int left = 0, max_length = 0, len = s.length();
    unordered_map<char,int> hm;

    for(int right=0; right<len; right++){
        hm[s[right]]++;

        while(hm.size() > k){
            hm[s[left]]--;
            if(hm[s[left]]==0){
                hm.erase(s[left]);
            }
            left++;
        }

        max_length = max(max_length, right-left+1);
    }

    return max_length;
}
