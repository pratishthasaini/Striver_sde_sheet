class Solution {
public:
    void solve(vector<int>& nums, int i, vector<int> out, set<vector<int>> &st){
        if(i == nums.size()){
            if(!out.empty()){
                sort(out.begin(), out.end());
            }        
            st.insert(out);
            return;
        }     
        solve(nums, i+1, out, st);  
        out.push_back(nums[i]);      
        solve(nums, i+1, out, st);
        // out.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> st;
        vector<int> out;
        vector<vector<int>> ans;     
        int i = 0;
        solve(nums, i, out, st);
        for(auto e:st){
            ans.push_back(e);
        }
        return ans;
    }
};

// this is brute force but okay for us ^-^
