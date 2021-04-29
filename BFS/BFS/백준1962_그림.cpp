#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int main() {
	int x, y;	
	int **board, **vis;
	queue<pair<int, int>> Q;

	int dx[4] = {-1,0,1,0};
	int dy[4] = {0,-1,0,1};

	cin >> x >> y;
	board = new int*[x];
	vis = new int*[x];
	for (int i = 0; i < x; i++) {
		board[i] = new int[y];
		vis[i] = new int[y];
	}


	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> board[i][j];
			vis[i][j] = 0;
		}
	}

	int card = 0;
	int large = 0;
	
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (board[i][j] == 0 || vis[i][j] == 1) continue;
			queue<pair<int, int>> Q;
			card++;
			vis[i][j] = 1;
			int size = 0;
			Q.push({ i,j });
			while (!Q.empty()) {					
				size++;
				pair<int, int> cur = Q.front();
				Q.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || nx >= x || ny < 0 || ny >= y) continue; 
					if (vis[nx][ny] || board[nx][ny] != 1) continue; 
					vis[nx][ny] = 1;
					Q.push({ nx,ny });
				}
			}
			if (size > large)
				large = size;
		}
	}
	cout << card << "\n" << large;

}