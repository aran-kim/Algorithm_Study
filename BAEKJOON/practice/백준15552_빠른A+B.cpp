#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b ,count = 0;
	cin >> count;
	for(int i = 0; i<count; i++) {
		cin >> a >> b;
		cout << a + b <<"\n";
	}

}