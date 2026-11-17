class Solution {
public:
    int findLHS(vector<int>& nums) {
      unordered_map<int,int>frequency_map;
      for(auto i:nums){
        frequency_map[i]++;
      }  
      int ans=INT_MIN;
      for(auto it:frequency_map)
      {
        if(frequency_map.find(it.first+1)!=frequency_map.end()){
            ans=max(ans,it.second+frequency_map[it.first+1]);
        }
      }
      return ans==INT_MIN?0:ans;
    }
};