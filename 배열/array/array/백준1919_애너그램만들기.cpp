#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	int count = 0 ,asize = a.length(), bsize = b.length();
	if (asize >= bsize) {
		for (int i = 0; i < a.length(); i++) {
				if (b.find(a[i]) < a.length()) {
					int idx = 0;
					idx = b.find(a[i]);
					b.erase(find(b.begin(), b.end(), a[i]));
					count++;
				}
			}
	}
	else {
		for (int i = 0; i < b.length(); i++) {
			if (a.find(b[i]) < b.length()) {
				int idx = 0;
				idx = a.find(b[i]);
				a.erase(find(a.begin(), a.end(), b[i]));
				count++;
			}
		}
	}
	
	cout << asize + bsize - 2 * count;
	
}