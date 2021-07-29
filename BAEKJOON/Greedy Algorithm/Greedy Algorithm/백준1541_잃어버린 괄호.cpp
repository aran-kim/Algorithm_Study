#include <bits/stdc++.h>

using namespace std;

int main() {
	string exp;
	cin >> exp;

	bool minus = 0;
	int num = 0;
	int answer = 0;

	for (int i = 0; exp[i] != NULL; i++) {
		if (exp[i] == '-'||(minus&&exp[i]=='+')) {
			if (!minus) {
				minus = 1;
				answer += num;
			}
			else answer -= num;
			num = 0;
		}
		else if (exp[i] == '+') {
			answer += num;
			num = 0;
		}
		else {
			num = num * 10 + (exp[i] - 48);
		}
	}
	if(minus) answer -= num;
	else answer += num;

	cout << answer;
}