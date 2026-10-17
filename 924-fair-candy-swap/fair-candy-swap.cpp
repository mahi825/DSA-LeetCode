class Solution {
public:
   
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
      

        int sumA=0;
        int sumB=0;

        for(int x:aliceSizes){
            sumA+=x;
        }
        for(int x:bobSizes){
            sumB+=x;
        }
        sort(bobSizes.begin(),bobSizes.end());
        int diff=(sumB-sumA)/2;
        for(int x:aliceSizes){
            int y=x+diff;
            if(binary_search(bobSizes.begin(),bobSizes.end(),y)){
                return {x,y};
            }
        }
        return {};
    }
};