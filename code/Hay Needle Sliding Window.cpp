class Solution {
public:
    int strStr(string haystack, string needle) {
        int k=needle.length(), len=haystack.length();

        string str = "";
        for(int i=0; i<k; i++) str+=haystack[i];

        if(str == needle) return 0;

        for(int i=k; i<len; i++){
            str = str.substr(1, k-1);
            str+=haystack[i];
            if(str == needle) return i-k+1;
        }

        return -1;
    }
};