class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string origin ="";
        for(int i=0;i<s.length();i++){
            if((s[i]>='a'&&s[i]<='z')||s[i]>='0'&&s[i]<='9'){
                origin+=s[i];
            }
        }
        string origin2=origin;
        reverse(origin.begin(),origin.end());
        if(origin==origin2){
            return true;
        }else{
            return false;
        }
    }
};