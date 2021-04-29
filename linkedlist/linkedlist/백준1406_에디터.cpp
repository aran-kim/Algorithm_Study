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
			//Ŀ���� �������� ��ĭ �ű�
			if(iter != letter.begin())
				iter--;
				
			
			break;
		case 'D':
			//Ŀ���� ���������� ��ĭ �ű�
			if(iter != letter.end())
				iter++;
	
			break;
		case 'B':
			//Ŀ�� ���ʿ� �ִ� ���ڸ� ������
			cout << *iter;
			if (iter != letter.begin())
				iter = letter.erase(--iter);
		
			break;
		case 'P':
			cin >> alpha;
			// ���ڸ� Ŀ�� ���ʿ� �߰���
			letter.insert(iter, alpha);
		
			break;
		}
	}
	for (auto it = letter.begin(); it != letter.end(); it++)
		cout << *it;
}