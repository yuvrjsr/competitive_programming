#include <bits/stdc++.h>
using namespace std;
using ll = long long;

inline void debugMode() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}


/*
Given an array arr[] of size n.
Given Q queries and in each query given L and R,
print sum of array elements from index L to R.
*/


int main() {
	debugMode();

	int n, q;
	cin >> n >> q;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		cout << arr[i] << " ";
	}
	cout << endl;

	vector <int> prefix (n + 1, 0);

	//1st method. for creating prefix array
	// for (int i = 1; i <= n; i++) {
	// 	prefix[i] = prefix[i - 1] + arr[i - 1];
	// }


	//2nd method. for creating prefix array
	for (int i = 0; i < n; i++) {
		prefix[i + 1] = prefix[i] + arr[i];
	}

	for (auto i : prefix) {
		cout << i << " ";
	}
	cout << endl;

	while (q--) {
		int l, r;
		cin >> l >> r;
		int ans = 0;
		ans = prefix[r] - prefix[l - 1];
		cout << ans << endl;
	}

	return 0;
}