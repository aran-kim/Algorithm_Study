#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int fail = 0;
		string s;
		stack<char> stack;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '(') {
				stack.push(s[i]);
			}
			else if (s[j] == ')') {
				if (!stack.empty()) {
					stack.pop();		
				}
				else fail = 1;
			}
		}
		if (!fail && stack.empty())
			cout << "YES\n";
		else cout << "NO\n";
	}
}