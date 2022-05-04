class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> mp;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            mp[indices[i]]=ch;
        }
        
        string temp="";
        for(int i=0;i<s.length();i++){
            temp+=mp[i];
        }
        return temp;
    }
};