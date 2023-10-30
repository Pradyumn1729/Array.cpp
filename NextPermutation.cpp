class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int ind = -1;

        // Find the first index where arr[i] < arr[i+1]
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                ind = i;
                break;
            }
        }

        if (ind == -1) {
            // If no such index is found, the array is in descending order.
            // Reverse the whole array to get the smallest permutation.
            reverse(arr.begin(), arr.end());
        } else {
            // Find the smallest element to the right of arr[ind] but larger than arr[ind]
            int smallestLarger = -1;
            for (int i = n - 1; i > ind; i--) {
                if (arr[i] > arr[ind]) {
                    smallestLarger = i;
                    break;
                }
            }

            // Swap arr[ind] and arr[smallestLarger]
            swap(arr[ind], arr[smallestLarger]);

            // Reverse the subarray to the right of arr[ind]
            reverse(arr.begin() + ind + 1, arr.end());
        }
    }
};
