class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> rsl;
        for(int i=0;i<nums.size()-2;++i){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1, r=nums.size()-1;
            while(l<r){
                if(nums[l]+nums[r]==-1*nums[i]){
                    vector<int> v={nums[i],nums[l],nums[r]};
                    rsl.push_back(v);
                    while(l<r && nums[l]==nums[l+1]){
                        ++l;
                    }
                    while(l<r && nums[r]==nums[r-1]){
                        --r;
                    }
                    ++l; --r;
                }
                else if(nums[l]+nums[r]>-1*nums[i]) --r;
                else ++l;
            }
        }
        return rsl;
    }
};