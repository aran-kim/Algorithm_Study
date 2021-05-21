#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int man[6] = { 0 }, woman[6] = { 0 };

	for (int i = 0; i < n; i++) {
		int s, y;
		cin >> s;
		if (s == 0) {
			cin >> y;
			man[y - 1]++;
		}
		else {
			cin >> y;
			woman[y - 1]++;
		}
	}
	int count = 0, room = 0;
	for (int i = 0; i < 6; i++) {
		if (man[i] % k != 0) {
			room = room + (man[i] / k) + 1;
		}
		else {
			room = room + (man[i] / k);
		}
		if (woman[i] % k != 0) {
			room = room + (woman[i] / k) + 1;
		}
		else {
			room = room + (woman[i] / k);
		}
	}
	cout << room;
	
}