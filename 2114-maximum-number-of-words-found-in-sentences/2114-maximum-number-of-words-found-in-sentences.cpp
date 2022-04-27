class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int answer = 0;
        for(int i=0;i<sentences.size();i++){
            int count = 0;
            string str = sentences[i];
            for(int j=0;j<str.length();j++){
                char ch = str[j];
                if(ch==' ') count+=1;
            }
            answer=max(answer,count+1);
        }
        return answer;
    }
};