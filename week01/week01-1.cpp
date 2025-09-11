class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length();
        for(int i=0; i <= H - N; i++){
            // .substr(開始, 長度) 部分的字串
            if(haystack.substr(i, N) == needle) return i;
        }

        return -1;
    }
};
