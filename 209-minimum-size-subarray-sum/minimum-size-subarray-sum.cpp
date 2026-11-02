class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int minLength=nums.size()+1;
        int sum=0;
        for(int end=0;end<nums.size();end++){
            sum+=nums[end];
            while(sum>=target){
                minLength=min(minLength,end-start+1);
                sum-=nums[start];
                start++;
            }
        }
        return minLength==nums.size()+1?0:minLength;
    }
};