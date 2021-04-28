#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
	list<char> letter;

	string s;
	getline(cin, s);
	for (int i = 0; s[i] != NULL; i++) {
		letter.emplace_back(s[i]);
	
	}
	int n;
	char order, alpha;
	cin >> n;
	auto iter = letter.end();
	for (int i = 0; i < n; i++) {
		cin >> order;
		switch (order) {
		case 'L':
			//커서를 왼쪽으로 한칸 옮김
			if(iter != letter.begin())
				iter--;
				
			
			break;
		case 'D':
			//커서를 오른쪽으로 한칸 옮김
			if(iter != letter.end())
				iter++;
	
			break;
		case 'B':
			//커서 왼쪽에 있는 문자를 삭제함
			cout << *iter;
			if (iter != letter.begin())
				iter = letter.erase(--iter);
		
			break;
		case 'P':
			cin >> alpha;
			// 문자를 커서 왼쪽에 추가함
			letter.insert(iter, alpha);
		
			break;
		}
	}
	for (auto it = letter.begin(); it != letter.end(); it++)
		cout << *it;
}