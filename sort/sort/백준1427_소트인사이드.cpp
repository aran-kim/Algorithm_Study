#include <bits/stdc++.h>

using namespace std;

int main() {
	long long N;
	cin >> N;
	int  num = N, c = 1;
	int count[10] = { 0, };
	list<int> v;
	while (N / 10 != 0) {
		N /= 10;
		c++;
	}
	cout << c;
	for (int i = 0; i < c; i++) {
		int n = num / (int)pow(10, i)  % 10;
		cout << n;
		count[n]++;
	}
	for (int i = 9; i >= 0; i--) {
		while (count[i] != 0) {
			cout << i;
			count[i]--;
		}
	}

}