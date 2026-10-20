class Solution {
public:
    int countn(vector<vector<int>>matrix,int mid){
        int cnt=0;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
        if(matrix[i][j]<=mid){
            cnt++;
        }
            }
        }
        return cnt;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       int n=matrix.size();
        int low=matrix[0][0];
        int high=matrix[n-1][n-1];
        while(low<high){
            int mid=low+(high-low)/2;
            int cnt=countn(matrix,mid);
            
             if(cnt<k){
                low=mid+1;

            }
            else{
                high=mid;
            }
        }
        return low;
    }
};