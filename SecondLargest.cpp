#include<bits/stdc++.h>
using namespace std;

int Secondlargest(vector<int> &arr,int n){
    int largest=arr[0];
    int secondl=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondl=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && secondl<arr[i]){
            secondl=arr[i];
        }
    }
    return secondl;
}
int SecondSmallest(vector<int> &arr,int n){
    int smallest=arr[0];
    int SecondSmall=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            SecondSmall=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && SecondSmall>arr[i]){
            SecondSmall=arr[i];
        }
    }
    return SecondSmall;
}

int main(){
vector<int> arr={-1,-2,3,4,5};
cout<<"Second Largest ele is: "<<Secondlargest(arr,arr.size())<<endl;
cout<<"Second samllest ele is: "<<SecondSmallest(arr,arr.size());
    return 0;
}