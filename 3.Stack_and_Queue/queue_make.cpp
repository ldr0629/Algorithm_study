#include <iostream>
#include <stack>
#include <limits.h>
#define SIZE 5
using namespace std;

void queue_print(stack<int> s2);

int main() {
	stack<int> s1, s2;
	int data, queue_data;
	
	// enqueue
	for(int i = 0; i<SIZE; i++) {
		cin>>data;
		s1.push(data);
	}
	
	// dequeue
	for(int i = 0; i<SIZE; i++) {
		queue_data = s1.top();
		s1.pop();
		s2.push(queue_data);
	}
	
	queue_print(s2);
}

void queue_print(stack<int> s2) {
	for(int i = 0; i<SIZE; i++) {
		cout<<s2.top()<<' ';
		s2.pop();
	}
}
