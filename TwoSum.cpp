//two sum problem using better approach 
#include<bits/stdc++.h>

using namespace std;
int main(){
    
    vector <int> ans;
    unordered_map<int,int> mp;
    int arr[]={1,2,3};
    int n = 3;
    int target = 5;
    for(int i=0;i<n;i++){
        
        if(mp.find(target-arr[i])!=mp.end()){
            ans.push_back(mp[target-arr[i]]);
            ans.push_back(i);
        }
        
        mp[arr[i]]=i;
    }
    
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        
        return 0;
    
}