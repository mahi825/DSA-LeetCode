class Solution {
    public int totalFruit(int[] fruits) {
        int start=0;
        Map<Integer,Integer>frequencyMap=new HashMap<>();
        int maxfruits=0;
        for(int end=0;end<fruits.length;end++){
            int curr=fruits[end];
            frequencyMap.put(curr,frequencyMap.getOrDefault(curr,0)+1);
            if(frequencyMap.size()>2){
                int left=fruits[start];
                frequencyMap.put(left,frequencyMap.get(left)-1);
                if(frequencyMap.get(left)==0){
                    frequencyMap.remove(left);
                }
                start++;
            }
            maxfruits=Math.max(end-start+1,maxfruits);

        }
        return maxfruits;
    }
}