#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string s;
	do {
		stack<char> stack;
		int	size = 0, count = 0;

		getline(cin ,s,'.');
		for (int i = 0; i < s.length(); i++) {

			if (s[i] == '(' || s[i] == '[') {
				stack.push(s[i]);
				size++;
			}
			else if (s[i] == ')') {
				if (!stack.empty()) {
					if (stack.top() == '(') {
						count++;
						stack.pop();
					}
					else  count--;
				}
				else count--;
			}
			else if (s[i] == ']') {
				if (!stack.empty()) {
					if (stack.top() == '[') {
						count++;
						stack.pop();
					}
					else count--;
				}
				else count--;
			}

		}

		if (s.length() == 1)
			continue;
		else if (count == size)
			cout << "yes\n";
		else if (count !=size)
			cout << "no\n";


	} while (s[0] != '.'&&s.length()!=1);
}