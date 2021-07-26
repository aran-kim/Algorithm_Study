#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main() {
	int N;
	cin >> N;
	pair<int, int> time;
	vector<pair<int,int>> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
	}

	sort(v.begin(), v.end(), compare);

	int count = 0;
	int pre = 0;
	for (int i = 0; i < N; i++) {
		if (pre <= v[i].first) {
			pre = v[i].second;
			count++;
		}
	}
	cout << count;
}