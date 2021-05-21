#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	int **arr = new int *[N];
	for (int i = 0; i < N; i++)
		arr[i] = new int[2];

	for (int i = 0; i < N; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}

	int *temp;

	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			if (arr[i][0] > arr[j][0]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			else if (arr[i][0] == arr[j][0]) {
				if (arr[i][1] > arr[j][1]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i][0] << " " << arr[i][1] << "\n";
	}


}