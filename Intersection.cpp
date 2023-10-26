#include<bits/stdc++.h>
using namespace std;

vector<int> ans;

void Intersect(vector<int> &v1, vector<int> &v2) {
    int i = 0;
    int j = 0;

    while (i < v1.size() && j < v2.size()) {
        if (v1[i] < v2[j])
            i++;
        else if (v1[i] > v2[j])
            j++;
        else {
            ans.push_back(v1[i]);
            i++;
            j++;
        }
    }
}



int main() {
    vector<int> v1 = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> v2 = {2, 3, 3, 5, 6, 6, 7};

    Intersect(v1, v2);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}

