#include <iostream>

using namespace std;

int main() {
	int alphabet[26] = { 0, };
	char s[1000000];
	cin >> s;

	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] >= 'a'&&s[i] <= 'z') {
			alphabet[int(s[i]) - 97] ++;
		}
		else {
			alphabet[int(s[i]) - 65]++;
		}
	}
	int max = 0, count = 0, save;
	for (int i = 0; i < 26; i++) {
		if (max < alphabet[i]) {
			count = 0;
			max = alphabet[i];
			save = i;
			count++;
		}
		else if (max == alphabet[i]) {
			count++;
		}
	}

	if (count > 1) {
		cout << '?';
	}
	else {
		cout << char(save + 65);
	}
}