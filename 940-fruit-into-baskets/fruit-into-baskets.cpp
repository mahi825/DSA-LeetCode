class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int start=0;
       unordered_map<int,int>frequencyMap;
       int maxfruits=0;
       for(int end=0;end<fruits.size();end++){
        int curr=fruits[end];
         frequencyMap[curr]++;
         if(frequencyMap.size()>2){
            int left=fruits[start];
            frequencyMap[left]--;
            if(frequencyMap[left]==0){
                frequencyMap.erase(left);
            }
            start++;
         }
         maxfruits=max(end-start+1,maxfruits);
       } 
       return maxfruits;
    }
};