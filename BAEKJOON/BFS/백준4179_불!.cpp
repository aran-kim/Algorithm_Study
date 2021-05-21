#include <bits/stdc++.h>

using namespace std;

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };
char mirro[1001][1001] = { -1 };
int vis[1001][1001] = { -1 };

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int x, y;
	cin >> x >> y;
	pair<int, int> fire, start;	
	queue<pair<int, int>> Q;

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> mirro[i][j];
			vis[i][j] = -1;
			if (mirro[i][j] == '#') {
				vis[i][j] = 0;
			}else if (mirro[i][j] == 'J'){
				start = { i,j };
				vis[i][j] = 0;
			}
			else if (mirro[i][j] == 'F') {
				fire = { i,j };	
				Q.push(fire);
				vis[i][j] = 0;
			}
		}
	}
	Q.push(start);


	int count = 0;
	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop();
		if (mirro[cur.first][cur.second] == 'F') {	
			for (int i = 0; i < 4; i++) {
				int nx = cur.first + dx[i];
				int ny = cur.second + dy[i];
				if (nx<0 || nx>(x - 1) || ny<0 || ny>(x - 1)) continue;
				if (mirro[nx][ny] == '.') {
					mirro[nx][ny] = 'F';
					vis[nx][ny] = 0;
					Q.push({ nx,ny });
				}			
			}
		}
		else if(mirro[cur.first][cur.second] == 'J') {
			count = vis[cur.first][cur.second];
			vis[cur.first][cur.second] = 0;
			mirro[cur.first][cur.second] = count+1;
			if ((cur.first == 0) || (cur.first == (x - 1)) || (cur.second == 0) || (cur.second == y - 1)) {
				cout << count + 1;
				return 0;
			}
			for (int i = 0; i < 4; i++) {
				int nx = cur.first + dx[i];
				int ny = cur.second + dy[i];
			
				if (nx<0 || nx>(x - 1) || ny<0 || ny>(y - 1)) continue;
				if (vis[nx][ny] != -1 ) continue;				

				vis[nx][ny] = count + 1;
				mirro[nx][ny] = 'J';
				Q.push({ nx,ny });
							
			}
		}
	}		
	cout << "IMPOSSIBLE";


}