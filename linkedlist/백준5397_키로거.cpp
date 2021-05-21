#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		list<char> letter;
		list<char> number;
		letter.clear();
		number.clear();
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			letter.push_back(s[j]);
		}
		auto it = number.begin();

		for (auto iter = letter.begin(); iter != letter.end(); iter++) {
			if (*iter == '-') {
				if (it != number.begin())
					it = number.erase(--it);
			}
			else if (*iter == '<') {
				if (it != number.begin()) {
					it--;
				}
			}
			else if (*iter == '>') {
				if (it != number.end()) {
					it++;
				}
			}
			else {
				number.insert(it,*iter);
			}
		}
		for (auto it = number.begin(); it != number.end(); it++)
			cout << *it;
		cout << "\n";
	}
}