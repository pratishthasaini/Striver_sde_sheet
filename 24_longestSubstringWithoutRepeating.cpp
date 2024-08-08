class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int maxi = 0;
        int left = 0;
        int right = 0;
        while(right < s.length()){         
            if(mp.find(s[right]) != mp.end() && mp[s[right]] >= left){
                left = mp[s[right]] + 1;
            }  
            mp[s[right]] = right;         
            maxi = max(maxi, right - left + 1);
            right++;         
        }
        return maxi;
    }
};
