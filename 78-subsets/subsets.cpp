class Solution {
public:
        vector<vector<int>>result;
        vector<int>current;
        void solve(vector<int>&nums,int index){
            if(index==nums.size()){
                result.push_back(current);
                return;
            }
            solve( nums,index+1);
            current.push_back(nums[index]);
            solve(nums,index+1);
            current.pop_back();

        }
        vector<vector<int>>subsets(vector<int>&nums){
            solve(nums,0);
            return result;
        }

    
};