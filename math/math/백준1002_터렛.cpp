#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {

		double x1, x2, y1, y2, r1, r2, c = 0, count = 0;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		if (d == 0) {
			if (r1 == r2) cout << "-1\n";
			else cout << "0\n";
		}
		else {
			if (r1 + r2 == d || abs(r1-r2)==d ) cout << "1\n";
			else if (abs(r1 - r2) < d && r1+r2 >d) cout << "2\n";
			else cout << "0\n";
		}

	}
}