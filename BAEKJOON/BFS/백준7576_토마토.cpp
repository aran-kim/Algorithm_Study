#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y;
	int dx[4] = { -1,0,1,0 };
	int dy[4] = { 0,-1,0,1 };
	cin >> y >> x;
	int **box, **vis;
	box = new int*[x];
	vis = new int*[x];
	for (int i = 0; i < x; i++) {
		box[i] = new int[y];
		vis[i] = new int[y];
	}
	int rare = 0;
	int size = 1;
	queue < pair<int, int>> Q, dis;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> box[i][j];
			vis[i][j] = 0;
			if (box[i][j] == -1) {
				vis[i][j] = 1;
			}
			else if (box[i][j] == 0) {
				rare++;
			}
			else if (box[i][j] == 1) {
				Q.push({ i,j });
			}

		}
	}
	if (rare == 0) {
		cout << 0;
		return 0;
	}

	int count = 0, num = 0;
	while (!Q.empty()&&rare) {
		pair<int, int> cur = Q.front();		
		count = vis[cur.first][cur.second];
		vis[cur.first][cur.second] = 1;
		Q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx<0 || nx>(x - 1) || ny<0 || ny>(y - 1)) continue;
			if (vis[nx][ny] !=0 ) continue;

			if (box[nx][ny] == 0) {
				vis[nx][ny] = count+1;
				box[nx][ny] = 1;
				Q.push({ nx,ny });
			}
		}
	}

	int rare = 0;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (box[i][j] == 0)
				rare++;
		}
	}
	int max = 0;
	if (rare == 0) {
		cout << count;
	}
	else cout << -1;

}
