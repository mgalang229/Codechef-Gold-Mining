#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, x, y;
		cin >> n >> x >> y;
		// check if the total maximum weight that Chef and his friends can carry is
		// greater than or equal to the total weight of all of the gold
		cout << ((n + 1) * y >= x ? "YES" : "NO") << '\n';
	}
	return 0;
}
