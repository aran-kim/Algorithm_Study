#include <iostream>

using namespace std;

int main() {
	char s[101];
	cin >> s;
	int count = 0;
	for (int i = 0; s[i] != NULL; i++) {
		count++;
		if (s[i] == 'c') {
			if (s[i + 1] == '=') {
				i++;
			}
			else if (s[i + 1] == '-') {
				i++;
			}
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == 'z'&&s[i+2]=='=') {
				i +=2;
			}
			else if (s[i + 1] == '-') {
				i++;
			}
		}
		else if (s[i] == 'l'&& s[i+1] == 'j') {
			i++;
		}
		else if (s[i] == 'n' && s[i + 1] == 'j') {
			i++;
		}
		else if (s[i] == 's' && s[i + 1] == '=') {
			i++;
		}
		else if (s[i] == 'z' && s[i + 1] == '=') {
			i++;
		}
	}
	cout << count;
}