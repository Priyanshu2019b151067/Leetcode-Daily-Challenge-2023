int maxPoints(vector<vector<int>>& points) {
        int no_points = points.size();
        if(no_points <= 2) return no_points;
        int maxi = 2;
        for(int i = 0;i < points.size()-1;i++){
            for(int j = i+1;j < points.size();j++){
                int temp_points = 2;
                for(int k = 0;k < points.size();k++){
                    if(i!= k && j!=k){
                        if(((points[j][1] - points[i][1])*(points[k][0]-points[j][0])) == ((points[k][1]-points[j][1])*(points[j][0]-points[i][0]))){
                            temp_points++;
                        }
                    }
                }
                maxi = max(maxi,temp_points);
            }
        }
        return maxi; 
    }