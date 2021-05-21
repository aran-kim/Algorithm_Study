#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	double sum = 0;
	int num, temp, N;
	cin >> N;
	int count[8001] = { 0, };
	for (int i = 0; i < N; i++) {
		cin >> num;
		count[num + 4000]++;
		sum += num;
	}

	int max_count = 0;
	vector<int> v1, v2;
	for (int i = 0; i <= 8000; i++) {
			
		if (count[i] > max_count) {
			max_count = count[i];
			v2.clear();
		}
		if (count[i] == max_count) {
			v2.push_back(i-4000);
		}
		while (count[i] != 0) {
			v1.push_back(i-4000);
			count[i]--;
		}
	}

	double avg = sum / double(N);
	cout << round(avg) << "\n";

	cout << v1[N/2] << "\n";

	if(v2.size()==1) cout << v2[0] << "\n";
	else cout << v2[1] << "\n";

	cout << v1[N - 1] - v1[0] << "\n";

}