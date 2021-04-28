#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	cin.ignore();
	string *s = new string[N];
	for (int i = 0; i < N; i++) {
		getline(cin, s[i]);
	}
	for (int i = 0; i < N; i++) {
		cout << i<< " " <<s[i];
		cout << "\n";
	}
}