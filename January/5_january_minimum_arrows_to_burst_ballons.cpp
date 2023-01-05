class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](vector<int> &a, vector<int> &b){
            return a[1] < b[1];
        });
        int start = points[0][0];
        int end = points[0][1];
        int arrows = 1;
        for(int i = 1;i < points.size();i++){
            if(points[i][0] > end){
                arrows++;
                start = points[i][0];
                end = points[i][1];
            }
        }
        return arrows;
    }
};