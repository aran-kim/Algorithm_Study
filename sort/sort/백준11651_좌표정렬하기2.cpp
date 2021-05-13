#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second == p2.second) {
		return p1.first < p2.first;
	}
	return p1.second < p2.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<pair<int, int>> v;

	int N, x, y;
	cin >> N;


	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		pair<int, int> p = make_pair(x, y);
		v.push_back(p);
	}

	sort(v.begin(), v.end(), comp);

	for (auto iter = v.begin(); iter != v.end(); iter++) {
		cout << (*iter).first << " " << (*iter).second << "\n";
	}

}