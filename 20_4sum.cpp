class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int a = 0; a < nums.size(); a++){
            if( a > 0 && nums[a] == nums[a-1]) continue;
                for(int b = a+1; b < nums.size(); b++){
                    if( b > a+1 && nums[b] == nums[b-1]) continue;
                        int c = b+1;
                        int d = nums.size()-1;
                            while(c < d){
                                long long sum = nums[a];
                                sum += nums[b];
                                sum += nums[c];
                                sum += nums[d];
                              // adding one by one so that it will not cause any error for furthur
                                    if(target == sum){
                                        vector<int> v = {nums[a], nums[b], nums[c], nums[d]};
                                        ans.push_back(v);
                                        d--;
                                        c++;                                       
                                        while(d > c && nums[c] == nums[c-1]) c++;
                                        while(d > c && nums[d] == nums[d+1]) d--;
                                    }
                                    else if(sum > target) d--;
                                    else c++;
                            }
                }
        }
        return ans;
    }
};
