class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
      set<int>s;                                                        
      int res=0;
        copy( nums.begin(), nums.end(), inserter(s, s.end())); 
        int n=nums.size();
        for(int i=0;i<n;i++){
            set<int> st;
            for(int j=i;j<n;j++){
                st.insert(nums[j]);

                if(st.size()==s.size())
                    res+=1;
            }
        }
        return res;
 
    }
};