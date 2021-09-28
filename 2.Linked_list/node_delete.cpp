#include <iostream>
#include <list>
using namespace std;

int main() {
	list<char> li;
	list<char>::iterator iter; 
	char data;
	cout<<"삭제할 노드 : ";
	cin>>data;
	
	for(int i = 0; i<5; i++) {
		li.push_back('a'+i);
	}
	
	iter = li.begin();
	for(int i = 0; i<data-'a'; i++) {
		iter++;
	}
	li.erase(iter);
	
	/*
	for(iter = li.begin(); iter != li.end(); iter++) {
		cout<<*iter<<' ';
	}
	*/
	
	for(auto data : li) {
		cout<<data<<' ';
	}
}
