#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	char s[100];
	
	int fail = 0, count =0;
	for (int i = 0; i < N; i++) {
		fail = 0;
		int alpha[26] = { 0, };
		cin >> s;
		for (int j = 0; s[j] != NULL; j++) {
			int num = int(s[j] - 97);
			if (alpha[num] > 0) {
				if (s[j] == s[j-1])	continue;
				else fail = 1;
			}
			else alpha[num]++;
		}
		if (!fail) {
			count++;
		}
	}
	cout << count;
}