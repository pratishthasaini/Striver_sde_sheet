class Solution {
public:
long long inv = 0;
void mergeandcount(long long arr[], long long start, long long mid, long long end){
    long long a[end+1];
    long long i = start;
    long long k = start;
    long long j = mid+1;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            a[k++] = arr[i++];
        }
        else{
            a[k++] = arr[j++];
            inv += (mid-i+1);
        }
    }
    while(i <= mid){
        a[k++] = arr[i++];
    }
    while(j <= end){
       a[k++] = arr[j++]; 
    }
    for(int l = start; l <= end; l++){
        arr[l] = a[l];
    }
}
void mergesort(long long arr[], long start, long long end){
    if(start >= end) return;
    long long mid = (start + end)/2;
    mergesort(arr, start, mid);
    mergesort(arr, mid+1, end);
    mergeandcount(arr, start, mid, end);
}
long long int inversionCount(long long arr[], int n) {
    long long start = 0;
    mergesort(arr, start, n-1);
    return inv;
}
};
