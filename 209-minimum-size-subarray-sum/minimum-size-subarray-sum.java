class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int start=0;
        int minLength=nums.length+1;
        int sum=0;
        for(int end=0;end<nums.length;end++){
            sum+=nums[end];
            while(sum>=target){
                minLength=Math.min(minLength,end-start+1);
                sum-=nums[start];
                start++;
            }
        }
        return minLength==nums.length+1?0:minLength;
    }
}