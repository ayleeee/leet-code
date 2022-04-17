class Solution {
public:
    string reverseWords(string& s) {
       stringstream ss(s);
        ss.str(s);
        
        vector<string> vec;
        string ans="";
        
        string word;
        while(ss>>word){
            reverse(word.begin(),word.end());
            vec.push_back(word);
        }
        
        for(int i=0;i<vec.size()-1;i++){
            ans+=vec[i];
            ans+=" ";
        }
        ans+=vec[vec.size()-1];
        
        return ans;
    }
};