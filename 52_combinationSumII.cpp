class Solution {
public:
    void solve(vector<int>& candidates, int i, int target, vector<int> &v, vector<vector<int>>& ans){
        if(target == 0){
        ans.push_back(v);
        return;
        }
        

    for (int j = i; j < candidates.size(); j++) {
        if (j > i && candidates[j] == candidates[j - 1]) continue;
        if (candidates[j] > target) break;
        v.push_back(candidates[j]);
        solve(candidates, j + 1, target - candidates[j], v, ans);
        v.pop_back(); 
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(candidates.begin(), candidates.end());
        solve(candidates, 0, target, v, ans);
        return ans;
    }
};
