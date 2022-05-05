class Solution {
public:
    bool divisorGame(int n) {
        int counter = 0;
        int x = 1;
        while(n>1){
            if(n%x==0){
                counter+=1;
                n-=x;
            }
        }
        
        if(counter%2==1) return true;
        else return false;
    }
};