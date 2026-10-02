class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        vector<vector<string>> rsl;
        for(string s:strs){
            string key=s;
            sort(key.begin(), key.end());
            umap[key].push_back(s);
        }
        for(auto& pair : umap)
            rsl.push_back(pair.second);
        
        return rsl;
    }
};