class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0, right=heights.size()-1;
        int mymax=0;
        while(left<right){

            int lv=heights[left], rv=heights[right], hgt=lv>rv?rv:lv;
            if(hgt*(right-left)>mymax) mymax=hgt*(right-left);
            if(lv>rv) {--right;}
            else {++left;}
            
        }
        return mymax;
    }
};