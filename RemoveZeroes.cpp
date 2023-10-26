#include<bits/stdc++.h>
using namespace std;

vector<int> MoveZeroes(vector<int> arr, int n) {
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) return arr;

    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int* MoveZeroesBegin(int arr[], int n) {
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            j = i;
            break;
        }
    }

    if (j == -1) return arr;

    for (int i = j + 1; i < n; i++) {
        if (arr[i] == 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    return arr;
}

int main() {
    vector<int> arr = {1, 2, 0, 9, 6, 0, 0, 3, 5, 0};
    int n = arr.size();
    
    // Call the MoveZeroes function
    arr = MoveZeroes(arr, n);

    // Print the modified vector
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Uncomment the next lines if you want to use MoveZeroesBegin function
    // int arr[] = {1, 2, 0, 9, 6, 0, 0, 3, 5, 0};
    // int n = sizeof(arr) / sizeof(int);
    // int* result = MoveZeroesBegin(arr, n);

    // for (int i = 0; i < n; i++)
    //     cout << result[i] << " ";

    return 0;
}
