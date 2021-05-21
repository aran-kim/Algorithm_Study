#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	int num = 665, n = 0, temp;
	while (N != 0) {
		n = 0;
		num++;
		temp = num; 
		int count = 0;
		temp *= 10;
		while (temp / 10 != 0) {	
			if (num / (int)pow(10, count) % 10 == 6) {
				n++;
				if (n == 3)	break;
			}
			else n = 0;
			count++;
			temp /= 10;
		}

		if (n >= 3) N--;
	}
	cout << num;
}
