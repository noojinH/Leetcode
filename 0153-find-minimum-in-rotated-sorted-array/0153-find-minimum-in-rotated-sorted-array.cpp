class Solution {
public:
    int findMin(vector<int> &nums) {
        int left=0, right=nums.size()-1, rsl=right;
        while(left<=right){
            int c = (left+right)/2;
            if(nums[c]<nums[0]) {
                rsl=c;
                right=c-1;
            }
            else {
                left=c+1;
            }
        }
        if(nums[rsl]==nums[right]) rsl=0;
        return nums[rsl];
    }
};