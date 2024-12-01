//  Refer For Plan https://gist.github.com/deexithparand/efcb680d363367d78ef07590be0cdc3a

//  Longest Substring with At Most Two Distinct Characters

// Pattern : can clearly see it's a variable window size

// variable window size

// problem link : (https://www.naukri.com/code360/problems/longest-substring-with-at-most-two-distinct-characters_3125863?leftPanelTabValue=PROBLEM)

// technique : left and right pointer and hashmap to store window properties

// solution
int lengthOfLongestSubstring(string s) {
    // Write your code here.
    int len=s.length(), max_len=INT_MIN, left=0, right=0;
    unordered_map<char,int> hm;

    for(right=0; right<len; right++){
        hm[s[right]]++;
        while(hm.size()>2 && left<right){
            hm[s[left]]--;
            if(hm[s[left]]==0){
                hm.erase(s[left]);
            }
            left++;
        }
        max_len = max(max_len, right-left+1);
    }
    if(max_len == INT_MIN){
        return 0;
    }
    return max_len;
}

