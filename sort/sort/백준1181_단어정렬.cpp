#include <bits/stdc++.h>

using namespace std;

bool comp( string s1,  string s2) {
	if (s1.size() == s2.size()) { 
		return s1 < s2;
	}
	return s1.size() < s2.size();   
}

int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	int N;
	cin >> N;

	vector<string> v;
	string s;

	for (int i = 0; i < N; i++) {
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), comp);

	for (int i = 0; i < N; i++) {
		if ( i != N - 1 &&v[i] == v[i + 1]) continue;
		else cout << v[i] << "\n";
	}
}