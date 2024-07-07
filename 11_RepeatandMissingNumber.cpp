vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long s = 0, sn = 0, s1 = 0, s1n = 0;
    for(int i = 0; i < A.size(); i++){
        s += A[i];
        sn += i+1;
        s1 += (long long) A[i] * A[i];
        s1n += (long long) (i+1) * (i+1);        
    }
    long long x, y;
    y = ((s1n - s1) /( sn - s)  + sn - s )/ 2;
    x = y - sn + s;   
    return {(int)x, (int)y};
}
