class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(int i=0;i<words.size();i++){
            string temp = words[i].substr(0,pref.length());
            if(temp==pref) count+=1;
        }
        
        return count;
    }
};