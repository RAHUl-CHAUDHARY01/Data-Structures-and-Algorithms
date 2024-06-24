    int firstOcc(int nums[], int target,int n){
        int s= 0;
        int e= n-1;
        int ans=-1;
        int mid= s+(e-s)/2;
        while(s<=e){
            if(target== nums[mid]){
                ans= mid;
                e= mid-1;
            }
            else if(nums[mid] > target){
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            mid= s+(e-s)/2;
        }
        return ans;
    }
    int LastOcc(int nums[], int target,int n){
        int s= 0;
        int e= n-1;
        int ans=-1;
        int mid= s+(e-s)/2;
        while(s<=e){
            if(target== nums[mid]){
                ans= mid;
                s=mid+1;
            }
            else if(nums[mid] > target){
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            mid= s+(e-s)/2;
        }
        return ans;
    }
    // 2 5
	int count(int arr[], int n, int x) {
	    int first= firstOcc(arr,x,n);
	    int last= LastOcc(arr,x,n);
	    if(first==-1 && last==-1){
	        return 0;
	    }
	    
	    return (last-first +1 );
	 } 
