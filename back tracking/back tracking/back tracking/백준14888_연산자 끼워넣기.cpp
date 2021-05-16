#include <bits/stdc++.h>

using namespace std;

void op() {

}

int main() {
	int N, num;
	cin >> N;
	int oper[4] = { 0, }; // + = X * /
	vector<int> v;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < 4; i++) {
		cin >> num;
		oper[i] = num;
	}
	
	op()


}