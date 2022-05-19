class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int sz = matrix.size();
        if(sz==0) return false;
        int sz2 = matrix[0].size();
        
        int i =0;
        int j= sz2-1;
        
        while(i<sz && j>=0){
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]< target) i++;
            else j--;
        }
        return false;
    }
};

