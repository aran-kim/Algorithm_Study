#include <iostream>

using namespace std;

int main() {
	int x, y, z;
	while (1) {
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0) return 0;

		if (x > y&&x > z) {
			if (x*x == y * y + z * z) cout << "right" << "\n";
			else cout << "wrong" << "\n";
		}
		else if (y > x && y > z) {
			if (y*y == x * x + z * z) cout << "right" << "\n";
			else cout << "wrong" << "\n";
		}
		else if (z > x&&z > y) {
			if (z*z == y * y + x * x) cout << "right" << "\n";
			else cout << "wrong" << "\n";
		}

	}
}