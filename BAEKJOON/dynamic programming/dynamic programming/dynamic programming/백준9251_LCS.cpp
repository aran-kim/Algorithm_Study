#include <iostream>

using namespace std;

char string1[1001];
char string2[1001];
int dp[1001][1001] = { 0, };

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}
int main() {
	cin >> string1 >> string2;
	int str1 = string(string1).size();
	int str2 = string(string2).size();

	for (int i = 0; i <str1; i++) {
		for (int j = 0; j < str2; j++) {
			if (string1[i] == string2[j]) {
				dp[i][j] = dp[i-1][j-1] + 1;
			}			
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	int m = 0;
	for (int i = 0; i < 1001; i++) {
		for (int j = 0; j < 1001; j++) {
			m = max(m, dp[i][j]);
		}
	}
	cout << m;
}