class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int front=1;
        vector<int> out;
        for(size_t i=0;i<nums.size();++i){
            out.push_back(front);
            front *= nums[i];
        }
        int back=1;
        for(size_t i=nums.size();i-->0;){
            out[i] *= back;
            back *= nums[i];
        }
        return out;
    }
};