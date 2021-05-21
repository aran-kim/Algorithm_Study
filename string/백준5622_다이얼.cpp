#include <iostream>

using namespace std;

int main() {
	char s[16];
	int num, sum = 0;
	cin >> s;
	int i;
	for (i = 0; s[i] != NULL; i++) {
		num = int(s[i] - 65)/3 +2;
		if (s[i] == 'S')	num = 7;
		else if (s[i] == 'V')	num = 8;
		else if (s[i] == 'Z' || s[i] == 'Y')	num = 9;
		sum = sum + num;
	}

	cout << sum + i;
}
