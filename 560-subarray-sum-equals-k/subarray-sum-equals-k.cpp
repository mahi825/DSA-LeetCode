class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        vector<int>prefixsum(n);
        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];

        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                if(i==0){
                    sum=prefixsum[j];

                }
                else{
                    sum=prefixsum[j]-prefixsum[i-1];
                }
                if(sum==k){
                    count++;
                }
            }
        }
            return count;
        }
    
};