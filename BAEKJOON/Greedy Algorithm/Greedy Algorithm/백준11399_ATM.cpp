#include <bits/stdc++.h>

using namespace std;

int compare(int a, int b) {
	return a < b;
}

int main() {
	int N;
	cin >> N;
	vector<int> P(N);

	for (int i = 0; i < N; i++) {
		cin >> P[i];
	}

	sort(P.begin(), P.end(), compare);
	
	int sum = P[0];
	int temp = P[0];
	for (int i = 1; i < N; i++) {
		temp += P[i];
		sum += temp;
	}

	cout << sum;

}