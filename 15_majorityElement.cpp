// Moore's voting algo
class Solution {
public:
    int majorityElement(vector<int>& nums) {      
        int count = 0;
        int x;
        for(int i = 0; i < nums.size();i++){
            if(count == 0){
                count = 1;
                x = nums[i];
            }
            else if(x == nums[i]){
                count ++;
            }
            else{
                count --;
            }
        }
        int ct = 0;
        for(int i = 0; i < nums.size() ; i++){
            if(x == nums[i]) ct++;
        }
        return (nums.size()/2 < ct) ? x : -1; 
    }
};
