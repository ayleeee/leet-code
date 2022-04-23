class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        else{
        unordered_map<char,int> mp;
        for(auto sch:s) mp[sch]+=1;
        for(auto tch:t) {
            if(!mp[tch]) return false;
            mp[tch]-=1;
        }
        return true;
        }
    }
};