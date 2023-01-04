class Solution {
public:

    int minimumRounds(vector<int>& tasks) {
         unordered_map<int,int> um;
        for(auto &x: tasks){
            um[x]++;
        }
        vector<int> cnt;
        for(auto &x: um){
            cnt.push_back(x.second);
        }

        int rounds = 0;
        for(int i = 0;i < cnt.size();i++){
            if(cnt[i] == 1){
                return -1;
            }else if(cnt[i] == 2 || cnt[i] == 3){
                rounds += 1;
            }else{
                if(cnt[i] %3==0){
                    rounds += (cnt[i]/3);
                }else{
                    rounds += ((cnt[i] + 2)/3);
                }
            }
        }
        return rounds;
    }
};