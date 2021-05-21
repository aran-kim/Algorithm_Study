#include <iostream>
#include <queue>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);

	int N;
	cin >> N;
	queue<int> q;

	for (int i = 1; i < N + 1; i++)
		q.push(i);

	int count = 0;

	while (q.size() > 1) {
		count++;
		if (count % 2 == 1) {
			q.pop();
		}
		else {
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
	}
	cout << q.front();

}