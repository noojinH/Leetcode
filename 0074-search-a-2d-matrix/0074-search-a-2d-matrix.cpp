class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=0, right=matrix.size()*matrix[0].size()-1;
        while(left<=right){
            int c = (left+right)/2;
            if(matrix[c/matrix[0]. size()][c%matrix[0].size()]==target) { return true; }
            else if(matrix[c/matrix[0].size()][c%matrix[0].size()]<target) { left = c+1; }
            else { right = c-1; }
        }
        return false;
    }
};