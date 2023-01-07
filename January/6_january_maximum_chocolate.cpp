class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
       sort(costs.begin(),costs.end());
       int i = 0;
       int ice_creams = 0;
       while(i < costs.size()){
           if(costs[i] <= coins){
               ice_creams++;
               coins = coins - costs[i];
               i++;
           }else{
               break;
           }
       }
       return ice_creams;
    }
};