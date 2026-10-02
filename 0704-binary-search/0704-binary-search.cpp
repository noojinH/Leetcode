class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        int c = (left+right)/2;
        while(left<=right){
            if(nums[c]==target){
                return c;
            }
            else if(nums[c]>target){
                right = c-1;
                c = (left+right)/2;
            }
            else{
                left = c+1;
                c = (left+right)/2;
            }
        }
        return -1;
    }
};