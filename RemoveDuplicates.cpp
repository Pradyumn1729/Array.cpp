//removing duplicates using two pointer approach ,can be made to solve the problem quickly 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
       int i=0;
        for(int j=1;j<arr.size();j++){
            if(arr[i]!=arr[j]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
    }
};