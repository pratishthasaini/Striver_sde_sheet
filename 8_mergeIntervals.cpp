class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> outer; 
        for(int i = 0; i < intervals.size(); i++){
            if(outer.empty() || intervals[i][0] > outer.back()[1]){
                outer.push_back(intervals[i]);
            }
            else{
                outer.back()[1] = max(intervals[i][1], outer.back()[1]);
            }
        }
        return outer;
    }
};
