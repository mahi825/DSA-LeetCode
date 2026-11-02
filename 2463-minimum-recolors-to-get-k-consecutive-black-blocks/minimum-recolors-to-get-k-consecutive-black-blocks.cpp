class Solution {
public:
    int minimumRecolors(string blocks, int k) {
      int n=blocks.size();
     
      int mini=INT_MAX;
      int cntW=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W')
            {
                cntW+=1;
            }
        }
        mini=min(mini,cntW);
        
        for(int i=k;i<n;i++){

            if(blocks[i-k]=='W'){
                cntW-=1;
            }
            if(blocks[i]=='W'){
                cntW+=1;
            }
            mini=min(mini,cntW);
            
        }
      
      return mini==INT_MAX?0:mini;
    }
};