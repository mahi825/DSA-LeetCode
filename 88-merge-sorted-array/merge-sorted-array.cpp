class Solution {

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int p=m-1;
      int q=m+n-1;
      int r=n-1;
      while(p>=0&&r>=0){
        if(nums1[p]>nums2[r]){
            nums1[q]=nums1[p];
           p--;
        }
        else{
            nums1[q]=nums2[r];
            r--;
            
        }
        q--;
      }
      while(r>=0){
        nums1[q]=nums2[r];
        r--;
        q--;
      }
  
      
    }
};