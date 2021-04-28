#include <iostream>
#include <vector>
using namespace std;
/*
int main() {
	int N, input, a, count = 0;
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		cin >> input;
		v.push_back(input);
	}
	cin >> a;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == a) {
			count++;
		}
	}
	cout << count;
}*/


int main() {
	cin.tie(0);
	int n = 0;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int x = 0, count = 0;
	cin >> x;
	int *occur = new int[2000001];
	for (int i = 0; i < n; i++) {
		occur[a[i]] = 1;
		if (x  > a[i]) {
			if (occur[x - a[i]] == 1) {
				count++;
			}
		}
	}
	cout << count;
}
