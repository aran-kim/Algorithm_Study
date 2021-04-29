#include<bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);

	int T, n, error = 0;
	cin >> T;

	while (T > 0) {
		deque<int> dq;
		string p, arr;
		cin >> p >> n >> arr;
		error = 0;
		for (int i = 1; arr[i] != ']'; i++) {
			if (arr[i] == ',') {
				continue;
			}
			else {
				int num = 0;
				deque<int> v;
				int s = char(arr[i] - '0');
				v.push_back(s);
				for (int j = i + 1; arr[j] != ','&&arr[j] != ']'; j++) {
					i++;
					int n = char(arr[j] - '0');
					v.push_back(n);
				}
				for (int i = 0; i < v.size(); i++) {
					int n = v[i];
					int dec = pow(10, v.size() - i - 1);
					num += n * dec;
				}
				dq.push_back(num);
			}
		}

		bool reverse = 0;
		for (int i = 0; i < p.size(); i++) {
			if (p[i] == 'R') {
				reverse = !reverse;
			}
			else if (p[i] == 'D') {
				if (dq.empty()) {
					error = 1;
				}
				else {
					if (reverse)
						dq.pop_back();
					else 
						dq.pop_front();
				}
			}
		}
		if (error == 0) {
			cout << "[";
			while (!dq.empty()) {
				if (reverse) {
					cout << dq.back();
					dq.pop_back();
				}
				else {
					cout << dq.front();
					dq.pop_front();
				}
				if (!dq.empty())
					cout << ",";
			}
			cout << "]\n";
		}
		else
			cout << "error\n";
		T--;
	}
}