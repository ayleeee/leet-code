class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size()-1;
        for(int i=0;i<s.size()/2;i++){      
            char ch = s[i];
            s[i]=s[j];
            s[j]=ch;
            j--;
        }
    }
};