class Solution {
  public:
   void solve(vector<int> arr, int i, vector<int> ans, int sum){
       if(i == arr.size()){
       ans.push_back(sum);
       return;
       }
       solve(arr, i+1, ans, sum+arr[i]);//including element
       solve(arr, i+1, ans, sum);//excluding element
   }
    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> ans;
        solve(arr, 0, ans, 0);
        return ans;
    }
};
