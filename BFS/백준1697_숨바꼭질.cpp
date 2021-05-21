#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<int> Q;
	int N, K;
	int road[200001] = { 0 };

	cin >> N >> K;
	int dx[2] = { -1,1 };
	Q.push(N);

	while (!Q.empty()) {
		int point = Q.front(); Q.pop();
		int cur;			
		if (point == K) {
				cout << road[point];
				return 0;
		}
		for (int i = 0; i < 3; i++) {
			if (i == 2) {
				cur = point * 2;
			}
			else cur = point + dx[i];

			if (cur < 0 || cur>200001) continue;
			if (road[cur] != 0) continue;
			road[cur] = road[point] + 1;			
			Q.push(cur);
		}
	}
}