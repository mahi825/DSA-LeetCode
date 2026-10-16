class Solution {
public:
    long long sqr(int n){
        return 1ll*n*n;
    }
    bool isPerfectSquare(int num) {
        int low=1;
        int high=num;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long sq=sqr(mid);
            if(sq==num){
                return true;
            }
            else if(sq>num){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return false;
    }
};