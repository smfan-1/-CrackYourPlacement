class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m = needle.length();
        for(int i=0;i<=n-m;i++){
            bool flag=true;
            int idx;
            for(int j=0;j<m;j++){
                if(haystack[j]!=needle[j+i]){
                    flag=false;
                    break;
                }
                idx=i;
            }
            if(flag)
                return idx;
        }
        return -1;
    }
};