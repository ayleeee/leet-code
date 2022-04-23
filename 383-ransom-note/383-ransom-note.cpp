class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(auto ch:magazine){
            mp[ch]++;
        }
        for(auto rn : ransomNote){
            if(!mp[rn]) return false;
            mp[rn]--;
        }
        return true;
    }
};

