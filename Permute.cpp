// Given an array nums of distinct integers, return all the possible permutations.

class Solution {
public:
    void Permute( vector<int> &ds,vector<vector<int>> &ans,int freq[],vector<int>& nums){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }

       for(int i=0;i<nums.size();i++){
            if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            Permute(ds,ans,freq,nums);
            freq[i]=0;
            ds.pop_back();
        }
       }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)  freq[i]=0;
        Permute(ds,ans,freq,nums);
        return ans;
    }
};