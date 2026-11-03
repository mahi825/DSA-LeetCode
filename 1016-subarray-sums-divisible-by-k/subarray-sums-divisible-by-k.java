class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        Map<Integer,Integer>modmap=new HashMap<>();
        int sum=0;
        int count=0;
        modmap.put(0,1);
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0){
                rem=rem+k;
            }
            if(modmap.containsKey(rem))
            {
                count+=modmap.get(rem);
            }
            modmap.put(rem,modmap.getOrDefault(rem,0)+1);

        }
        return count;
    }
}