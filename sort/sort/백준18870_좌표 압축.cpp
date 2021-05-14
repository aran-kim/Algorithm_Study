#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int N;
	cin >> N;
	vector<int> count(1000000);
	vector<pair<int, int>> v;

	for (int i = 0; i < N; i++) {
		pair<int, int> p;
		cin >> p.first;
		p.second = i;
		v.push_back(p);
	}
	sort(v.begin(), v.end());

	int c =0;

	for (int i = 0; i < N; i++) {
		if (i!=0 && v[i].first == v[i - 1].first) {
			count[v[i].second] = count[v[i - 1].second];	
			c++;
		}
		else count[v[i].second] = i- c;	
	}


	for (int i = 0; i < N; i++) {
		cout << count[i] << " ";
	}

}