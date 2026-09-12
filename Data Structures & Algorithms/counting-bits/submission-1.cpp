class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> count;
        for(int i=0;i<=n;i++){
            int num=0;
            for(int j=0;j<32;j++){
                if((1<<j)&i){
                    num++;
                }
            }
            count.push_back(num);
        }
        return count;
    }
};
