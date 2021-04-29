#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int rear = 0, front = 0;

void push(int x) {
	dat[rear] = x;
	rear++;
}

void pop() {
	front++;
}

int find_front() {
	return dat[front];
}

int back() {
	return dat[rear-1];
}

void test() {
	push(10); push(20); push(30);
	cout << find_front() << '\n'; // 10
	cout << back() << '\n'; // 30
	pop(); pop();
	push(15); push(25);
	cout << find_front() << '\n'; // 30
	cout << back() << '\n'; // 25
}

int main(void) {
	test();
}