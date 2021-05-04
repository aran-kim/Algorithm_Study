#include <iostream>

using namespace std;

int main() {
	int x, y, w, h;
	int d1, d2;
	cin >> x >> y >> w >> h;

	if (w - x >= x)	d1 = x;
	else d1 = w - x;

	if (h - y >= y) d2 = y;
	else d2 = h - y;

	if (d1 >= d2)	cout << d2;
	else cout << d1;

}