class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>frequencyMap;
        int start=0;
        int maxm=INT_MIN;
        for(int end=0;end<s.length();end++){
            frequencyMap[s[end]]++;
            if(frequencyMap.size()==end-start+1){
                maxm=max(maxm,end-start+1);

            }
            while(frequencyMap.size()!=end-start+1){
                frequencyMap[s[start]]--;
                if(frequencyMap[s[start]]==0){
                    frequencyMap.erase(s[start]);
                }
                start++;
            }
        }
       return maxm==INT_MIN?0:maxm;
    }
};