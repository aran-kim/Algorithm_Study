#include <bits/stdc++.h>

using namespace std;

int main() {
	int X, Y;	
	int dx[4] = { -1,0,1,0 };
	int dy[4] = { 0,-1,0,1 };
	
	cin >> X >> Y;

	int **vis;
	vis = new int*[X];
	for (int i = 0; i < X; i++)
		vis[i] = new int[Y];

	for (int i = 0; i < X; i++) {
		for (int j = 0; j < Y; j++)
			vis[i][j] = 0;
	}

	string s[100];
	int i = 0;

	for (int i = 0; i < X; i++)
		cin >> s[i];

	queue<pair<int, int>> Q;
	int count = 0;
	vis[0][0] = 1;
	Q.push({ 0,0 });

	while (!Q.empty()) {			
		count++;
		pair<int, int> cur = Q.front();
		Q.pop();
		count = vis[cur.first][cur.second];
		count += 1;
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx<0 || nx>X-1 || ny<0 || ny>Y-1) continue;
			if ((nx == X - 1) && ny ==( Y - 1)) {
				cout << count;
				return 0;
			}
			if (vis[nx][ny] == 0 && s[nx][ny] == '1') {
				vis[nx][ny] = count;
				Q.push({ nx,ny });
			}
		}
	}
}