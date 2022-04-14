class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int count = 0;
        
        for(auto jewel:jewels){
            for(auto stone:stones){
                if (jewel==stone){
                    count+=1;
                }
            }
        }
        return count;
    }
};