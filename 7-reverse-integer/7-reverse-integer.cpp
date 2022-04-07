class Solution {
public:
    int reverse(int x) {
        int flag = 1;
        if(x<=0){
            flag=-1;
        }
        
        int res=0;
        x=abs(x);
        
        while(x>0){
            int temp=x%10;
            if(res>INT_MAX/10){
                return 0;
            }
            res=res*10+temp;
            x=x/10;
        }
        
        return res*flag;
    }
};