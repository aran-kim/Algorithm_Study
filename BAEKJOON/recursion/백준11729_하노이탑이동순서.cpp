#include <bits/stdc++.h>

using namespace std;

vector<int> startv;
vector<int> destv;

void hanoi(int start, int dest, int x, int count) {
	
	if (count == 1) {
		startv.push_back(start);
		destv.push_back(dest);
	}
	else {
		hanoi(start, x, dest, count - 1);
		hanoi(start, dest, x, 1);
		hanoi(x, dest, start, count - 1);
	}
}

int main() {
	int k;
	cin >> k;
	hanoi(1,3,2,k);
	cout << startv.size() << "\n";
	for (int i = 0; i < startv.size(); i++)
		cout << startv[i] << " " << destv[i] << "\n";
}