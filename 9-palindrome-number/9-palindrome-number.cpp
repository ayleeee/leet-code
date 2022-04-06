class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }else{
            string origin = to_string(x);
            reverse(origin.begin(),origin.end());
            if(origin == to_string(x)){
                return true;
            }else{
                return false;
            }
        }
    }
};