#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// check if the difference of each element and the minimum element is divisible by k
	int mn = *min_element(a.begin(), a.end());
	long long ans = 0;
	bool checker = true;
	for (int i = 0; i < n; i++) {
		int x = a[i] - mn;
		checker &= (x % k == 0);
		ans += (x / k);
	}
	cout << (checker ? ans : -1) << '\n';
	return 0;
}