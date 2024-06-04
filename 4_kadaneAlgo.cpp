// maximum subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 0, current_sum = 0, maxSum = INT_MIN;
        while(n > right){
            current_sum += nums[right];
            maxSum = max(maxSum, current_sum);
            if(current_sum < 0){
                current_sum = 0;
                left = right+1;
            }
            right++;
        }
        return maxSum;
    }
};

// if sum goes down to 0 then set sum to 0 as we'll discard the subarray
