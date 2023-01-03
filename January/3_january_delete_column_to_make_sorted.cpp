class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int strs_size = strs[0].size();
        int count = 0;
        for(int i = 0;i < strs_size;i++){
            for(int j = 1; j < strs.size();j++){
                // not lexograpically sort
                if(strs[j][i] < strs[j-1][i]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};