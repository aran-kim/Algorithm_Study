#include <iostream>

using namespace std;

int main() {
	int N,p;
	cin >> N;

	int **people = new int *[N];

	for (int i = 0; i < N; i++) {
		people[i] = new int[3];
	}
		

	for (int i = 0; i < N; i++) {
		cin >> people[i][0] >> people[i][1];
	}


	for (int i = 0; i < N; i++) {
		int count = 1;
		int weight = people[i][0];
		int height = people[i][1];
		for (int j = 0; j < N; j++) {
			if (people[j][0] > weight && people[j][1] > height) {
				count++;
			}
		}
		cout << count << " ";
	}


}