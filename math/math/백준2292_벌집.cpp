#include <iostream>

using namespace std;

int main() {
	int N, goal = 1, count = 0;
	cin >> N;
	int i = 0;
	while (true) {
		i++;
		if (i == N) {
			cout << count + 1;
			return 0;
		}
		else if (goal == i) {
			count++;
			goal = goal + (6 * count);
		}
	}
}

