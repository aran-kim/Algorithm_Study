#include <iostream>
#include <algorithm>
using namespace std;
int m;
int arr[1000001] = { 0 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	
	for (int i = 2; i <= N; i++) {
		if (i % 6 == 0) arr[i] = min(min(arr[i - 1], arr[i / 2]), arr[i / 3]) + 1;
		else if (i % 2 == 0) arr[i] = min(arr[i - 1], arr[i / 2]) + 1;
		else if (i % 3 == 0) arr[i] = min(arr[i - 1], arr[i / 3]) + 1;
		else arr[i] = arr[i - 1] + 1;
	}
	
	cout << arr[N];
}