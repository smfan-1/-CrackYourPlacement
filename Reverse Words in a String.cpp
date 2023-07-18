class Solution {
public:
    string reverseWords(string s) {
        stack<string> ans;
        string result="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                continue;
            }
            string temp="";
            while(i<s.length() && s[i]!=' '){
                temp+=s[i];
                i++;
            }
            ans.push(temp);
        }
        if(ans.empty()){
            return "";
        }
        result=ans.top();ans.pop();
        while(!ans.empty()){
            result+=' '+ans.top();
            ans.pop();
        }
        return result;
    }
};