#include <bits/stdc++.h>
using namespace std;
using ll = long long;

inline void debugMode() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void fillPrefixSum(int arr[], int n, int prefixSum[]) {
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    debugMode();

    int arr[] = {10, 4, 16, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int prefixSum[n];
    fillPrefixSum(arr, n, prefixSum);
    for (int i = 0; i < n; i++) {
        cout << prefixSum[i] << " "; //10 14 30 50
    }

    return 0;
}