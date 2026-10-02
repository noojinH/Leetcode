class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset;
        for(int i:nums){
            uset.insert(i);
        }
        int max_len=0;
        for(int i:uset){
            if(uset.find(i-1)==uset.end()){
                int len=0;
                while(uset.find(i++)!=uset.end()){
                    ++len;
                    if(max_len<len) max_len=len;
                }
            }
        }
        return max_len;
    }
};