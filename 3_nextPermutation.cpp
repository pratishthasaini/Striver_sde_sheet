class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakdown = -1;
        for(int i = nums.size() - 2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                    breakdown = i;
                    break;
            }
        }
        if(breakdown == -1){
            reverse(nums.begin(), nums.end());
            return;
        }       
        for(int i = nums.size() -1; i > breakdown; i--){
            if(nums[i] > nums[breakdown]){
                swap(nums[i], nums[breakdown]);
                break;
            }
            
        }       
        reverse(nums.begin()+breakdown+1, nums.end());
    }
};

// find breakpoint if exits , else reverse the whole array
// find element just greater than breakpoint's value and swap it
// and reverse the whole right array with breakpoint+1 position
