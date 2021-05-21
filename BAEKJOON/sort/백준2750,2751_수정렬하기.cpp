#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, num;
	cin >> N;
	list<int> list;
	for (int i = 0; i < N; i++) {
		cin >> num;
		list.push_back(num);
	}
	list.sort();

	for (int i = 0; i < N; i++) {
		cout << list.front() << "\n";
		list.pop_front();
	}

}