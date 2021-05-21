#include <iostream>
#include <vector>

using namespace std;
int n;
void backtracking(int N, int M, vector<int> v) {
	bool exist = false;

	if (M == 0) {
		for (auto iter = v.begin(); iter != v.end(); iter++)
			cout << *iter << " ";
		cout << "\n";
		return;
	}

	for (int i = N; i <= n; i++) {
		v.push_back(i);
		backtracking(i, M - 1, v);
		v.pop_back();
	}
	return;
}


int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int  N, M;
	cin >> N >> M;
	n = N;
	vector<int> v;
	backtracking(1, M, v);
}