class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0;
        int count2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(count1 == 0 && nums[i] != el2){
                el1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0 && nums[i] != el1){
                el2 = nums[i];
                count2 = 1;
            }
            else if(nums[i] == el1){
                count1++;
            }
            else if(nums[i] == el2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        // cout << el1 <<" "<<el2 <<endl;
        vector<int> v;
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
        }
        // cout << cnt1 <<" "<<cnt2;
        if(cnt1 > int(nums.size()/3)) v.push_back(el1);
        if(cnt2 > int(nums.size()/3)) v.push_back(el2);
        return v;
    }
};
