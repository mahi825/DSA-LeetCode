class Solution {
public:
    int arrangeCoins(int n) {
        long long low=1;
        long long high=n;
        long long ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long tolcoin=(mid*(mid+1))/2;
            if(tolcoin==n){
                return mid;
            }
            else if(tolcoin>n){
                high=mid-1;

            }
            else{
                ans=mid;
                low=mid+1;
            }
        }
        return ans;
    }
};