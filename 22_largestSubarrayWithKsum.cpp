class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        unordered_map<int, int> mp;
        int sum = 0;
        int maxi = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(sum == 0){
                maxi = i+1;
            }
            else{
                if(mp.find(sum) != mp.end()){
                    maxi = max(maxi, i-mp[sum]);
                }
                else{
                    mp.insert({sum, i});
                }
            }
        }
        return maxi;
    }
};
