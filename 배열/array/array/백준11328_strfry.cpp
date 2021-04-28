#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	int num = N;
	string a, b;
	while (N--) {
		int count = 0;
		cin >> a >> b;
		bool T = false;
		if (b.length() == a.length()) {
			for (int i = 0; i < a.length(); i++) {
						if (b.find(a[i])<a.length()) {
							int idx = 0;
							idx = b.find(a[i]);
							b.erase(find(b.begin(), b.end(), a[i]));
							count++;
						}			
					}
		}
		if (count == a.length())
			cout << "Possible" << "\n";
		else cout << "Impossible" << "\n";
	}

}