#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	cin.tie(0);
	int n = 0;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int x = 0, count = 0;
	cin >> x;
	int *occur = new int[2000001];
	for (int i = 0; i < n; i++) {
		occur[a[i]] = 1;
		if (x > a[i]&&x!=2*a[i]) {
			if (occur[x - a[i]] == 1) {
				count++;
			}
		}
	}
	cout << count;
}


/*
int main() {
	int left, right, n, x, input,count = 0;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
	}
	cin >> x;
	sort(v.begin(), v.end());

	left = 0;
	right = n - 1;
	while (left < right)
	{
		if (v[left] + v[right] == x)
		{
			count++;
			right--;

		}
		else if (v[left] + v[right] > x)
		{
			right--;
		}
		else
		{
			left++;
		}
	}
	cout << count;
}*/

/*
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n=0, input;
	cin >> n;
	vector<int> v;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
	}
	int x=0, count =0;
	cin >> x;
	
	vector<int>::iterator iter;


	for (int i = 0; i < n; i++) {
		occur[a[i]] = 1;
		if (occur[x - a[i]]==1) {
			count++;
		}
	}
	cout << count;
}*/