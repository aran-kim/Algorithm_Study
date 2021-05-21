#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int N;
	cin >> N;
	int *a = new int[N];
	vector<int> v(N,0);
	stack<int> s;

	for (int i = 0; i < N; i++) {
		cin >> a[i];
		s.push(a[i]);
	}

	int size = N, top = a[N-1], re = 0, num =N;
	while (size > 0) {

		//size = 5 s.size = 5 // arr = 6, 9, 5, 7, 4

		//pop()을 해주어 문제를 풀기때문에, 다시 돌아올 때 다시 push를 해주어 원래 크기로 만들어줘야한다.

		// 근데 size가 줄어들때만 이런 상황을 만들고, 아닐때는 pop인 상태를 유지하도록 한다.

		if ((s.size() < size) && (re == 0)) {		
			num = size;
			int s_size = s.size();
			for (int i = s_size ; i < size; i++) {
				s.push(a[i]);
			}
			top = s.top();
			re = 1;
			s.pop();
			num--;
		}
		else if (s.size() == size) {
			num = size;
			top = s.top();
			re = 1;
			s.pop();
			num--;
		}

		if (s.empty()) {
			num = 0;
		}

		if (num == 0) {
			v[size-1] = 0;
			size--;
			re = 0;
			continue;
		}
		if (top < s.top()) {
			v[size-1] = num;
			size--;
			re = 0;
			continue;
		}
		else {
			if (!s.empty()) {
				s.pop();
				num--;
			}
			else {
				num = 0;
				size--;
				re = 0;
			}
		}
		v[size-1] = num;
	}

	for (auto iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " ";
}