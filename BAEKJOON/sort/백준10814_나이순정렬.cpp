#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, string> p1, pair<int, string> p2) {
	return p1.first < p2.first;
}

int main() {
	int N;
	cin >> N;
	int age;
	string name;
	vector<pair<int, string>> v;
	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		pair<int, string> p = make_pair(age, name);
		v.push_back(p);
	}

	stable_sort(v.begin(), v.end(), comp);

	for (auto iter = v.begin(); iter != v.end(); iter++)
		cout << (*iter).first << " " << (*iter).second << "\n";
}