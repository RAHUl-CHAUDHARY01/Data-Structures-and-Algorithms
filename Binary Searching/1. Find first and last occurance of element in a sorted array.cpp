   int firstOcc(vector<int>&nums, int target){
        int s= 0;
        int e= nums.size()-1;
        int ans=-1;
        int mid= s+(e-s)/2;
        while(s<=e){
            if(target== nums[mid]){ // got the index, now check kya usse chhote index pe element h ki nhi 
                ans= mid;
                e= mid-1;
            }
            else if(nums[mid] > target){ // check target in right side
                e=mid-1;
            }
            else if(nums[mid]<target){ // check target in left side
                s=mid+1;
            }
            mid= s+(e-s)/2;
        }
        return ans;
    }
    int LastOcc(vector<int>&nums, int target){
        int s= 0;
        int e= nums.size()-1;
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
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        int first= firstOcc(nums,target);
        int last= LastOcc(nums,target);
        return {first,last};
    }
};
