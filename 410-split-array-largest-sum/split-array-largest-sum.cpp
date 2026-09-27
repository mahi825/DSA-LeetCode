class Solution {
public:
    int countk(vector<int>& nums,int mid){
        int totalk=1;
        long long elements=0;
        for(int i=0;i<nums.size();i++){
            if(elements+nums[i]<=mid){
                elements+=nums[i];

            }
            else{
                totalk+=1;
                elements=nums[i];
            }
        }
        return totalk;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n){
            return -1;
        }
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int totalk=countk(nums,mid);
            if(totalk>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};