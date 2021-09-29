#include <iostream>
#include <stack>
#include <limits.h>
#define SIZE 5
using namespace std;

int main() {
	stack<int> s;
	int data, size, min_data = INT_MAX;
	
	cout<<"Stack data Input"<<endl;
	for(int i = 0; i<SIZE; i++) {
		cin>>data;
		if(min_data > data) {
			min_data = data;
		}
		s.push(data);
	}
	
	size = s.size();
	cout<<"Stack Print"<<endl;
	for(int i = 0; i<size; i++) {
		cout<<s.top()<<' ';
		s.pop();
	}
	
	cout<<endl<<"minimum : "<<min_data;
}
