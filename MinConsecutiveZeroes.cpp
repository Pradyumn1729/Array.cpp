
// brute force approach
// int Consecutive(vector<int> &v) {
//     int count;
//     vector<int> v1;

//     for (int i = 0; i < v.size(); i++) {
//         if (v[i] == 0) {
//             v1.push_back(count);
//             count = 0;
//         } else {
//             count++;
//         }
//     }

//     if (count > 0) {
//         v1.push_back(count);  // Handle the case where the sequence ends with 1
//     }

//     auto it = min_element(v1.begin(), v1.end());

//     if (it != v1.end()) {
//         return *it;
//     } else {
//         // Handle the case where v1 is empty (no 1s in the input vector)
//         return 0;
//     }
// }

// int main() {
//     vector<int> v = {1, 1, 0, 1, 1, 1, 0, 1, 1};

//     cout << "the min ele is " << Consecutive(v);
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int Consecutive(vector<int> &v) {
    int count = 0;
    int maxi = 0;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 1) {
            count++;
            maxi = max(maxi, count);
        } else {
            count = 0;
        }
    }

    return maxi;
}

int main() {
    vector<int> v = {1, 1, 0, 1, 1, 1, 0, 1, 1};

    cout << "the max ele is " << Consecutive(v);
    return 0;
}
