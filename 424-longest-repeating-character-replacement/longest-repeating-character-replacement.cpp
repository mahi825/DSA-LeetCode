class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>frequencyMap;
        int start=0;
        int maxFreq=0;
        int maxLength=0;
        for(int end=0;end<s.size();end++){
            frequencyMap[s[end]]++;
            maxFreq=max(maxFreq,frequencyMap[s[end]]);
            if((end-start+1)-maxFreq>k){//shrinking loop
                frequencyMap[s[start]]--;
                start++;
            }
            maxLength=max(maxLength,end-start+1);
        }
        return maxLength;
    }
};