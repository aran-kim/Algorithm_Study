#include <iostream>
#include <vector>

using namespace std;

void backtracking(int N, int M, vector<int> v) {

	if (M == 0) {
		for (auto iter = v.begin(); iter != v.end(); iter++) {
			cout << *iter << " ";
		}
		cout << "\n";
		return;
	}

	bool exist = false;
	for (int i = 1; i <= N; i++) {
		exist = false;
		for (auto iter = v.begin(); iter != v.end(); iter++) {
			if (*iter == i) {
				exist = true;
				break;
			}
		}
		if (exist) continue;
		v.push_back(i);
		backtracking(N, M - 1, v);
		v.pop_back();
	}
}


int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int  N, M;
	cin >> N >> M;

	vector<int> v;
	backtracking(N, M, v);


}