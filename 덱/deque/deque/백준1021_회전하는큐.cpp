#include <iostream>
#include <deque>

using namespace std;

int main() {
	int N, m, count = 0, a=0, b=0;
	cin >> N >> m;
	deque<int> dq;

	for (int i = 1; i <= N ; i++)
		dq.push_back(i);
	
	for (int i = 0; i < m; i++) {
		int target, idx;
		cin >> target;

		for (int i = 0; i < dq.size(); i++) {
			if (dq[i] == target) {
				idx = i;
				break;
			}
		}

		if (idx*2 <dq.size()) {
			while (dq.front() != target) {
				int temp = dq.front();
				dq.pop_front();
				dq.push_back(temp);
				count++;
			}
		}
		else {
			while (dq.front() != target) {
				int temp = dq.back();
				dq.pop_back();
				dq.push_front(temp);
				count++;
			}
		}
		dq.pop_front();
	}
	cout << count;
}