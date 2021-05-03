#include <iostream>

using namespace std;




int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	long long T, x, y, n, distance;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x >> y;
		distance = y - x;
		long long count;
		n = 1;
		if (distance == 1) {
			cout << 1 <<"\n";
			continue;
		}
		else if (distance == 2) {
			cout << 2 << "\n";
			continue;
		}
		while (n*n<=distance) {
			n++;
		}
		n--;
		count = 2 * n - 1;
		distance = distance - (n*n);

		long long remain = distance % n;
		if (remain)	count += distance / n + 1;
		else count += distance / n;
		cout << count << "\n";

	}
}