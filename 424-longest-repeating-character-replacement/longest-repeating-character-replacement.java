class Solution {
    public int characterReplacement(String s, int k) {
        int start=0;
        Map<Character,Integer>frequencyMap=new HashMap<>();
        int maxFrequency=0;
        int maxLength=0;
        for(int end=0;end<s.length();end++){
            char curr=s.charAt(end);
            frequencyMap.put(curr,frequencyMap.getOrDefault(curr,0)+1);
            maxFrequency=Math.max(maxFrequency,frequencyMap.get(curr));
            if(end-start+1-maxFrequency>k){
                char left=s.charAt(start);
                frequencyMap.put(left,frequencyMap.get(left)-1);
                start+=1;
            }
            maxLength=Math.max(end-start+1,maxLength);
        }
        return maxLength;
    }
}