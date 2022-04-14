class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> given = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> answer;
        
        for(auto word:words){
            string temp="";
            for(auto ch:word){
                temp+=given[ch-97];
            }
            answer.insert(temp);
        }
        
        return answer.size();
    }
};