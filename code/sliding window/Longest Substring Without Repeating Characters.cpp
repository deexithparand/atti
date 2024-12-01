// variable window size

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0, len = s.length(), left = 0, right = 0;
        unordered_map<char,int> hm;
        
        for(right=0; right<len; right++){
            if(hm[s[right]] == 0){
                hm[s[right]]++;
            } else {
                // until the element's frequency is made zero
                // cout<<s[right]<<endl;
                while(hm[s[right]]>0 && left<right){
                    hm[s[left]]--;
                    left++;
                }
                hm[s[right]]++;
                // cout<<left<<" "<<right<<endl;
            }

            max_len = max(max_len, right-left+1);
        }

        return max_len;
    }
};