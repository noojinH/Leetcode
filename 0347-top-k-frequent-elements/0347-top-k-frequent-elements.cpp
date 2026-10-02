class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i : nums){
            ++freq[i];
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        for(auto& map : freq){
            pair<int, int> p = make_pair(map.second, map.first);
            q.push(p);
            if(q.size() > k)
                q.pop();
        }
        vector<int> rsl;
        while(!q.empty()){
            rsl.push_back(q.top().second);
            q.pop();
        }
        return rsl;
    }
};