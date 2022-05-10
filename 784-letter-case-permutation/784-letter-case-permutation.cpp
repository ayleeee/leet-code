class Solution {
public:
    void helper(int sz,string& s,int idx,vector<string>& v){
        if(idx==sz){
            v.push_back(s);
            return;
        }
        
        if(isalpha(s[idx])){
            s[idx]=toupper(s[idx]);
            helper(sz,s,idx+1,v);
            s[idx]=tolower(s[idx]);
            helper(sz,s,idx+1,v);
        }else{
            helper(sz,s,idx+1,v);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> v;
        int sz = s.length();
        helper(sz,s,0,v);
        return v;
    }
};