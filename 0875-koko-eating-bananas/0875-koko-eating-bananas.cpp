class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1, right=*max_element(piles.begin(), piles.end()), rsl=right;
        while(left<=right){
            int k = (left+right)/2;
            int sum=0;
            for(int cnt : piles){
                sum+=(cnt+k-1)/k;
                if(sum>h) { break; }
            }
            if(sum<=h){
                rsl=k;
                right=k-1;
            }
            else{
                left=k+1;
            }
        }
        return rsl;
    }
};