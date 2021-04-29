#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	stack<char> stack;
	string s;
	getline(cin, s);
	int size = 0 , fail = 0, count = 0;
	int a[100] = { 0 };
	for (int i = 0; i < s.length(); i++) {
		if (stack.empty()) {
			int idx = 0;
			for (int i = 0; i < 100; i++) {
				if (a[i] == 0) {
					idx = i;
					break;
				}
			}
			size = idx;
		}

		if (s[i] == '('&&s[i + 1] == ')') {
			a[size] += 2;
			i++;
		}
		else if (s[i] == '['&&s[i + 1] == ']') {
			a[size] += 3;
			i++;
		}
		else if (s[i] == '(' || s[i] == '[') {
			stack.push(s[i]);
			size++;
		}
		else if (s[i] == ')') {
			if (!stack.empty()) {
				if (stack.top() == '(') {
					a[size] *= 2;
					a[size - 1] += a[size];
					a[size] = 0;
					size--;					
					stack.pop();
				}
				else fail = 1;
			}
			else fail = 1;
		}
		else if (s[i] == ']') {
			if (!stack.empty()) {
				if (stack.top() == '[') {
					a[size] *= 3;
					a[size - 1] += a[size];
					a[size] = 0;
					size--;					
					stack.pop();
				}
				else fail = 1;
			}
			else fail = 1;
		}	
		
	}
	for (int i = 0; i < 100; i++) {
		count += a[i];
	}
	if (!fail&&stack.empty())
		cout << count;
	else cout << "0" ;

}