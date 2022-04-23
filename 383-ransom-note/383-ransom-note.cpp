class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(auto ch:magazine){
            mp[ch]+=1;
        }
        for(auto rn : ransomNote){
            if(!mp[rn]) return false;
            mp[rn]-=1;
        }
        return true;
    }
};

