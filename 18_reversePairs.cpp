class Solution {
public:  
    void merge(vector<int> &arr,int start,int mid ,int end){
        vector<int> a;
        int i = start;
        int j = mid+1;
        while(i <= mid && j <= end){
            if(arr[i] < arr[j]){
                a.push_back(arr[i]);
                i++;
            }
            else{
                a.push_back(arr[j]);
                j++;
            }
        }
        while(i <= mid){
            a.push_back(arr[i]);
            i++;
        }
        while(j <= end){
          a.push_back(arr[j]);
            j++;
        }
        for(int l = start; l <= end; l++){
            arr[l] = a[l-start];
        }
    }
    int mergesort(vector<int> &arr, int start, int end){
        int inv  = 0;
        if(start >= end) return inv;
        int mid = (start + end)/2;
        inv += mergesort(arr, start, mid);
        inv += mergesort(arr, mid+1, end);
        inv += inversepair(arr, start, mid, end);
        merge(arr, start, mid, end);
        return inv;
    }
    int inversepair(vector<int> &arr, int start, int mid, int end){
        int inv = 0;
        int right = mid+1;
        for(int i = start; i <= mid; i++){
            while(right <= end && arr[i] > 2ll*arr[right]){
                right++;
            }
            inv += (right - (mid+1));           
        }
        return inv;
    }
    int reversePairs(vector<int>& nums){
        int inv =  mergesort(nums, 0, nums.size() - 1);
        return inv;
    }
};

// we didn't make temprory make with size we just defined it and then pushed back elements
