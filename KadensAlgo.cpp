//optimal approach to find the maximum subarray in the given array ,which also includes negative numbers too


#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum (int arr[], int n)
{
  int maxi = INT_MIN;
  int sum = 0;
  for (int i = 0; i < n; i++)
    {
      sum += arr[i];
      maxi = max (maxi, sum);
    if (sum < 0)
	{
	  sum = 0;
	}

    if (maxi < 0)
	maxi = 0;
    }

  return maxi;
}

int main ()
{
  int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
  int n = sizeof (arr) / sizeof (arr[0]);
  int maxSum = maxSubarraySum (arr, n);
  cout << "The maximum subarray sum is: " << maxSum << endl;
  return 0;
}


// time complexity is o(n);
// space complexity is o(1);


//in order to run in leetcode ,we have to run the below code which will handle all of the test cases 
// class Solution {
// public:
//     int maxSubArray(vector<int>& arr) {
//         int maxi=INT_MIN;
//         int sum=0;
//         for(int i=0;i<arr.size();i++){
//              sum +=arr[i];
//             maxi=max(maxi,sum);

//             if(sum<0)   
//                 sum=0;

//         }
//         if(arr.size()==0)
//             maxi=-1;
//         return maxi;
//     }
// };