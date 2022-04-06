class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }else{
            string origin = to_string(x);
            string origin2 = origin;
            reverse(origin.begin(),origin.end());
            if(origin == origin2){
                return true;
            }else{
                return false;
            }
        }
    }
};