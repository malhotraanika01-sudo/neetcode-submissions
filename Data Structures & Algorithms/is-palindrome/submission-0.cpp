class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> str;
        for(char letter:s){
            if(isalnum(letter)){
                str.push_back(tolower(letter));
            }
        }
        vector<char> rev;
        int j=0;
        for(int i=str.size()-1;i>=0;i--){
            rev.push_back(str[i]);
        }
        if(str!=rev){
            return false;
        }
        return true;
    }
};
