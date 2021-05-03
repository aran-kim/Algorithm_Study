#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	int length, cha;
	if (s1.length() > s2.length()) {
		length = s1.length() + 1;
		cha = s1.length() - s2.length();
	}
	else {
		length = s2.length() + 1;
		cha = s2.length() - s1.length();
	}
	int *answer = new int[length];
	
	for (int i = 0; i < length; i++) {
		answer[i] = 0;
	}

	for (int i = 0; i < length-1; i++) {
		if (length - 1 - i <= cha) {
			break;
		}

		int num = s1.length() - i-1;
		int num1 = int(s1[s1.length() - i - 1])-48;
		int num2 = int(s2[s2.length() - i - 1])-48;
		
		if (answer[i] + num1 + num2>=10) {
			answer[i] = (answer[i] + num1 + num2) % 10;
			answer[i + 1] += 1;
		}else answer[i] = (answer[i] + num1 + num2);
	}
	int num;

	for (int i = cha-1; i >= 0; i--) {
		if (s1.length() > s2.length()) num = int(s1[i])-48;
		else num = int(s2[i]) -48;
		if (answer[length-i-2] + num >= 10) {
			answer[length - i-2] = (answer[length - i-2] + num) % 10;
			answer[length - i-1] += 1;
		}
		else answer[length - i-2] = (answer[length - i-2] + num);
	}


	if (answer[length - 1] == 0) {
		for (int i = length - 2; i >= 0; i--)
			cout << answer[i];
	}
	else {
		for (int i = length - 1; i >= 0; i--)
			cout << answer[i];
	}

}