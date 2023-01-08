int maxPoints(vector<vector<int>>& points) {
        int no_points = points.size();
        if(no_points <= 2) return no_points;
        int maxi = 0;
        for(int i = 0;i < points.size()-1;i++){
            unordered_map<double,int> um;
            int temp_points = 0;
            for(int j = i+1;j < points.size();j++){
                double slope = 0;
                if(points[j][0] - points[i][0] == 0){
                    slope = pow(10,9);
                }else{
                    // slope = y2-y1/x2-x1
                    slope = (points[j][1] - points[i][1])/(1.0*points[j][0] -points[i][0]);
                }
                um[slope]++;
                if(um[slope] > temp_points){
                    temp_points = um[slope];
                }
            }
            maxi = max(maxi,temp_points);
        }
        return maxi+1; 
    }