#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string s;
	getline(cin,s);
	int i;
	for (i = 0; s[i] != NULL; i++) {
		if (s[i] == ' ') {
			count++;
		}
	}
	if (count == i) {
		cout << 0;
		return 0;
	}
	if (s[0] == ' ')	count--;
	if (s[i-1] == ' ')	count--;

	cout << count + 1;
}