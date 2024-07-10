class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        int maxi = 0;
        for(auto e: st){
            if(st.find(e-1) == st.end()){
                int count = 1;
                int x = e;
                while(st.find(x+1) != st.end()){
                    count++;
                    x++;
                }
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};
