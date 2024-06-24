    int findPeakElement(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int> sorted= nums;
        sort(sorted.begin(),sorted.end());
        if(sorted==nums){ // if the array is already sorted , then return the last index
            // cout<<"hi";
            return n;
        }
        int s=0;
        int e= n;
        int mid= s+(e-s)/2;
        while(s<e){
            if(nums[mid]<nums[mid+1]){
                s=mid+1;
                if(mid+1 ==n){ // if mid +1 is the last element , then it is the peak element 
                    cout<<"hi";
                    return mid+1;
                }
            }
            else{ //  same case for peak element and the right side checking
                e=mid;
            }
            mid= s+(e-s)/2;
        }
        return e; // return either e or s , because both are same in the last
    }
