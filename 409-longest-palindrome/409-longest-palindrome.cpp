class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int count = 0;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            mp[ch]++;
        }
        
        for(auto ch:mp){
            if(ch.second%2!=0){
                count++;
            }
        }
        if(count>1){
            return s.length()-count+1;
        }
        
        return s.length();
    }
};


