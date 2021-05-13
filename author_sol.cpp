#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	// set the value of 'x' to 0 (initial)
	// 'x' serve as the previous element (maximum) that will be added
	// to the current element being iterated upon in the loop below
	int x = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		// add the value of 'x' to the current element
		a[i] += x;
		// re-store the maximum value between 'x' and the current element
		x = max(x, a[i]);
		cout << a[i] << " ";
	}
	cout << '\n';
	return 0;
}
