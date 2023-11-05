#include<bits/stdc++.h>
using namespace std;
vector<int> PrintLeaders(int n,int arr[]){
     vector<int> ans;
    int max=arr[n-1];
    ans.push_back(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
            ans.push_back(arr[i]);
            max=arr[i];
        }
    }
    return ans;
}

int main(){
int n = 6;
  int arr[n] = {10, 22, 12, 3, 0, 6};
  vector<int> ans=PrintLeaders(n,arr);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i] <<" ";
  }
    return 0;
}