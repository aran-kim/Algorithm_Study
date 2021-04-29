#include <iostream>
using namespace std;

int main() {
	char c[101];
	cin >> c;

	for (char a = 'a'; a <= 'z'; a++) {
		int count = 0;
		for (int i = 0; c[i] != NULL; i++) {
			if (c[i] == a)
				count++;
		}
		cout << count << " ";
	}
}