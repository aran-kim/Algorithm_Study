#include <iostream>

using namespace std;

int main() {
	int N, size;
	char s[20];
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> size >> s;
		for (int j = 0; s[j] != NULL; j++) {
			for(int k=0; k<size; k++)
				cout << s[j];
		}
		cout << "\n";
	}

}