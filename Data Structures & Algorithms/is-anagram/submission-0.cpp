class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char,int> count;
        for(char str:s){
            count[str]++;
        }
        for(char str:t){
            count[str]--;
        }
        for(auto nums: count){
            if(nums.second!=0){
                return false;
            }
        }
    return true;
    }
};
