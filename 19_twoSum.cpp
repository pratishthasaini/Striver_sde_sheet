class Solution{
public:	
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr, arr+n);
	    int start = 0;
	    int end = n-1;
	    while(end > start){
	        if(arr[end] + arr[start] == x) return true;
	        if(arr[end] + arr[start] > x) end--;
	        else{
	            start++;
	        }
	    }
	    return false;
	}
};
