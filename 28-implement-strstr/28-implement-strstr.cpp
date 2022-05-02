class Solution {
public:
    int strStr(string haystack, string needle) {
        int hy = haystack.size();
        int nd = needle.size();
        if(hy==0) return 0;
        if(hy<nd) return -1;
        for(int i=0;i<=hy-nd;i++){
            if(haystack.substr(i,nd)==needle){
                return i;
            }
        }
        return -1;
    }
};