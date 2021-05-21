#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	stack<int> stack;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int a;
			cin >> a;
			stack.push(a);
		}
		else if (s == "pop") {
			if (!stack.empty()) {
				cout << stack.top()<<"\n";
				stack.pop();
			}
			else cout << -1 << "\n";
		}
		else if (s == "size") {
			cout << stack.size() << "\n";
		}
		else if (s == "empty") {
			if (stack.empty()) {
				cout << 1 <<"\n";
			}
			else cout << 0 << "\n";
		}
		else if (s == "top") {
			if (!stack.empty()) {
				cout << stack.top() << "\n";
			}
			else cout << -1 << "\n";
		}

	}
}