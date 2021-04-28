#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int N, count = 0;
	cin >> N;
	int *a = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	stack<int> s;
	vector<char> v;
	int i = 0, num = 1,stop=0;
	while(i<N) {
		if (v.size() > 2 * N) {
			cout << "NO";
			stop = 1;
			break;
		}
		if (s.empty()) {
			s.push(num);
			num++;
			v.push_back('+');
			continue;
		}	
		if (s.top() == a[i]) {
			s.pop();
			i++;
			v.push_back('-');
		}
		else {
			s.push(num);
			num++;
			v.push_back('+');
		}
	}
	if (stop == 0) 
	for (auto iter = v.begin(); iter != v.end(); iter++)
			cout << *iter << "\n";
	
	
}