class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
      int n=cardPoints.size();
      int lsum=0;
      int rsum=0;
      int maxsum=0;
      for(int i=0;i<=k-1;i++){          //O(K)
        lsum+=cardPoints[i];

      }
      maxsum=lsum;
      int rindex=n-1;
      for(int i=k-1;i>=0;i--){         //O(K)
        lsum-=cardPoints[i];
        rsum+=cardPoints[rindex];
        rindex--;
        maxsum=max(maxsum,lsum+rsum);
      }
      return maxsum;
    }
};

//T.C.=O(2*K)
//S.C=O(1)