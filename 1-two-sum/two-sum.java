class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer>indexmap=new HashMap<>();
        int n=nums.length;
        for(int i=0;i<n;i++){
            int num=nums[i];
            int more_needed=target-num;
            if(indexmap.containsKey(more_needed)){
                return new int[]{indexmap.get(more_needed),i};
            }
            indexmap.put(num,i);
        }
        return new int[]{-1,-1};
    }
}