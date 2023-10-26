#include<bits/stdc++.h>
using namespace std;

vector<int> UnionSet(int arr1[], int arr2[], int n1, int n2) {
    int i = 0, j = 0;
    vector<int> Union1;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            if (Union1.empty() || Union1.back() != arr1[i]) {
                Union1.push_back(arr1[i]);
            }
            i++;
        } else {
            if (Union1.empty() || Union1.back() != arr2[j]) {
                Union1.push_back(arr2[j]);
            }
            j++;
        }
    }

    // Add remaining elements from arr1
    while (i < n1) {
        if (Union1.empty() || Union1.back() != arr1[i]) {
            Union1.push_back(arr1[i]);
        }
        i++;
    }

    // Add remaining elements from arr2
    while (j < n2) {
        if (Union1.empty() || Union1.back() != arr2[j]) {
            Union1.push_back(arr2[j]);
        }
        j++;
    }

    return Union1;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 6};
    int arr2[] = {2, 3, 5};

    vector<int> result = UnionSet(arr1, arr2, 5, 3);

    for (int k = 0; k < result.size(); k++) {
        cout << result[k] << " ";
    }

    return 0;
}
