#include <iostream>
#include <string>
#include <stack>


using namespace std;

int main() {
	string s;
	stack<char> stack;
	int fail = 0, count = 0;

	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '('&&s[i + 1] == ')') {
			count += stack.size();
			i++;
		}
		else if (s[i] == '(') {
			stack.push(i);
			count++;
		}
		else {
			if (!stack.empty()) {
				stack.pop();
			}
			else fail = 1;
		}
	}
	cout << count;

}