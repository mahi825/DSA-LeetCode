class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int sqr=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sqr=1;
            if(n%(i+1)==0){
                sqr=nums[i]*nums[i];
                sum+=sqr;
            }
        }
        return sum;
    }
};