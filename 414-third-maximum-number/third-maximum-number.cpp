class Solution {
public:
    int thirdMax(vector<int>& nums) {
       set<int>st;
       for(int num:nums){
        st.insert(num);
       }
       vector<int>arr(st.begin(),st.end());
       if(arr.size()<3){
        return arr.back();
       }
       return arr[arr.size()-3];
    }
};