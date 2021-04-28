#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<int> s;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (a != 0) {
			s.push(a);
		}
		else {
			if (!s.empty())
				s.pop();
		}
	}
	int sum = 0;
	int size = s.size();
	for (int i = 0; i < size; i++) {
		sum += s.top();
		s.pop();
	}
	cout << sum;
}