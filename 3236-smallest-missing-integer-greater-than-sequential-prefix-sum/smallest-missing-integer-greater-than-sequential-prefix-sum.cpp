class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
     
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }
            else{
                break;
            }
        }
        while(true){
            bool found=false;
            for (int x:nums){
                if(x==sum){
                    found=true;
                }
            }
            if(!found){
                return sum;
            }
            sum++;
        }
    
    }
};