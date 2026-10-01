class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int maxi2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi2=maxi;
                maxi=nums[i];
            }
            else if(nums[i]>maxi2){
                maxi2=nums[i];
            }
        }
        return (maxi-1)*(maxi2-1);
    }
};