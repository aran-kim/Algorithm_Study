#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	int N;
	string temp;
	cin >> N;
	string *s = new string[N];

	for (int i = 0; i < N; i++) 
		cin >> s[i];
	
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			if (s[i].length() > s[j].length()) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (s[i].length() == s[j].length()) {
				for (int k = 0; k < s[i].length(); k++) {
					if (s[i][k] > s[j][k]) {
						temp = s[i];
						s[i] = s[j];
						s[j] = temp;
						break;
					}
					else if (s[i][k] != s[j][k]) break;
				}
			}
		}
	}

	for (int i  =0 ; i <N; i++) {
		if (s[i] == s[i + 1]) continue;
		else cout << s[i] << "\n";
	}
}