#include <bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int k) {  
    int xr = 0;
    map<int,int> mp;
    mp[xr]++;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++) {
       xr = xr ^ a[i];
       int x = xr ^ k;
       cnt += mp[x];
       mp[xr]++;
     }
    return cnt;
}
