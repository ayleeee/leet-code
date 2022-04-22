class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int mo = num%10;
            num=num/10+mo;
        }
        return num;
    }
};