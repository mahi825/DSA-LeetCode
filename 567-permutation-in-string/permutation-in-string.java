class Solution {
    public boolean checkInclusion(String pattern, String s2) {
        Map<Character,Integer>patternMap=new HashMap<>();
        for(int i=0;i<pattern.length();i++){
            char curr=pattern.charAt(i);
            patternMap.put(curr,patternMap.getOrDefault(curr,0)+1);
        }
        int start=0;
        int matched=0;
        for(int end=0;end<s2.length();end++){
            char curr=s2.charAt(end);
            if(patternMap.containsKey(curr)){
                patternMap.put(curr,patternMap.get(curr)-1);
                if(patternMap.get(curr)==0){
                    matched+=1;
                }
            }
            if(matched==patternMap.size()){
                return true;
            }
            if(end>=pattern.length()-1){
                 char left=s2.charAt(start);
                 if(patternMap.containsKey(left)){
                    if(patternMap.get(left)==0){
                        matched-=1;
                    }
                 patternMap.put(left,patternMap.get(left)+1);
                 }
                 start+=1;
                
            }
        }
        return false;
        
    }
}