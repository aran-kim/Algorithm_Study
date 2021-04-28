#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string s;
	int stop = 0, num = 0;
	do {
		int result = 0;
		stack<char> stack1, stack2;
		num++;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '{') {	
				stack1.push(s[i]);
			}
			else if (s[i] == '}') {					
				if (!stack1.empty()) {
					stack1.pop();
				}
				else {
					stack2.push(s[i]);
				}
			}
			else stop = 1;
		}
		if (!stack1.empty()) {
			result += stack1.size() % 2;
			result += stack1.size() / 2;
		}
		if (!stack2.empty()) {
			result += stack2.size() % 2;
			result += stack2.size() / 2;
		}

		if (!stop) {
			cout << num << ". " << result << "\n";
		}

	} while (!stop);
}