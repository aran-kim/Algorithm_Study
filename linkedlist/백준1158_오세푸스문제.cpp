#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, k;
	cin >> N >> k;
	vector<int> round;
	for (int i = 1; i < N+1; i++) {
		round.push_back(i);
	}
	auto iter = round.begin();
	cout << "<";
	while (N != 0) {
		for (int i = 0; i < k; i++) {
			if (iter == round.end()) {
				iter = round.begin();
				iter++;
			}
			else {
				iter++;
			}
		}
		if (round.size() == 1) {
			cout << *(--iter) << ">";
		}
		else {
			cout << *(--iter) << ", ";
		}
		iter = round.erase(iter);
		N--;
	}
}