class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> ana;
        for(string str:strs){
            string key=str;
            sort(key.begin(),key.end());
            ana[key].push_back(str);
        }
        vector<vector<string>> result;
        for(auto group:ana){
            result.push_back(group.second);
        }
        return result;
    }
};
