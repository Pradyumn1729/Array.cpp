//brute  froce approach 
// #include <bits/stdc++.h>

// using namespace std;
// int Array(int arr[],int n){
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//         if(arr[i]!=i+1){
//             return i+1;
//             break;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     // cout<<"Hello World";
//     int arr[]={5,3,2,1};
//     cout<<"the number is "<<Array(arr,4);

//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

int findMissingNumber(int arr[], int n) {
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = accumulate(arr, arr + n, 0);

    return abs(expectedSum - actualSum);
}

int main() {
    int arr[] = {5, 4, 3, 1, 6};
    cout << "The missing number is " << findMissingNumber(arr, 5);

    return 0;
}
