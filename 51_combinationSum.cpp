class Solution {
public:
    void solve(vector<int>& candidates, int i, int target, vector<int> v, vector<vector<int>>& ans){
    if(i == candidates.size()){
        if(target == 0){
        ans.push_back(v);
        }
        return;
    }

    if(target >= candidates[i]){
    v.push_back(candidates[i]);
    solve(candidates, i, target-candidates[i],v ,ans);
    v.pop_back();
    }
    solve(candidates, i+1, target,v ,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(candidates, 0, target, v, ans);
        return ans;
    }
};
