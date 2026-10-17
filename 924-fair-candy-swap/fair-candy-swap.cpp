class Solution {
public:
    int sumation(vector<int>&a)
    {
        int sum=0;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
        }
        return sum;
    }
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int n=aliceSizes.size();
        int m=bobSizes.size(); 

        int sumA=sumation(aliceSizes);
        int sumB=sumation(bobSizes);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                 if(sumA-aliceSizes[i]+bobSizes[j]==sumB-bobSizes[j]+aliceSizes[i])
                {
                    return{aliceSizes[i],bobSizes[j]};
                }
            }
        }
       return {};
    }
};