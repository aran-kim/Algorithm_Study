#include <iostream>

using namespace std;

int main() {
	char s[100];
	int alphabet[26];
	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	}

	int count = 0;
	cin >> s;

	for (int i = 0; s[i] != NULL; i++) {
		if(alphabet[int(s[i]) - 97] == -1)
			alphabet[int(s[i]) - 97] = count++;
		else count++;
	}

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}
}