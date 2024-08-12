class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size()-1; i++){
            int start = i+1;
            int end = nums.size()-1;
            if( i > 0 && nums[i] == nums[i-1]) continue;
            while(end > start){
                int sum = nums[i] + nums[start] + nums[end];
                if(sum == 0){
                    ans.push_back({nums[i], nums[start], nums[end]});
                    start++;
                    end--;
                    while(end > start && nums[start] == nums[start-1]) start++;
                    while(end > start && nums[end] == nums[end+1]) end--;
                  }
                else if(sum < 0) start++;
                else  end--;
            }
        }
        return ans;
    }
};
