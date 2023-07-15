class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.length();
        int start=0;int end=n-1;
        int count1=0;int count2=0;
        while(start<end){
            if(s.at(start)==s.at(end)){
                start++;end--;
            }
            else{
                start++;count1++;
            }
        }
        start=0;end=n-1;
        while(start<end){
            if(s.at(start)==s.at(end)){
                start++;end--;
            }
            else{
                end--;count2++;
            }
        }
        if(count1==1 || count2==1){
            return true;
        }
        else if(count1==0 || count2==0){
            return true;
        }
        else{
            return false;
        }
    }
};