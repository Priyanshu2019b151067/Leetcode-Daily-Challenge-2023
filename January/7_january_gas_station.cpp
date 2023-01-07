int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gas_addition = 0,cost_addition = 0;
        for(int i = 0;i < gas.size();i++){
            gas_addition += gas[i];
            cost_addition += cost[i];
        }
        if(gas_addition < cost_addition) return -1;
        int starting = 0;
        int tank_capacity = 0;
        for(int i = 0;i < gas.size();i++){
            tank_capacity += (gas[i] - cost[i]);
            if(tank_capacity < 0){
                starting = i+1;
                tank_capacity = 0;
            }
        }
        return starting;
    }