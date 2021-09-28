#include <iostream>
#include <list>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	list<int> li;
	int data;
	
	srand((unsigned int)time(NULL));
	for(int i = 0; i<10; i++) {
		data = (rand()%10) + 1;
		li.push_back(data);
	}
	
	li.sort();
	li.unique();
	for(auto d : li) {
		cout<<d<<' ';
	}
}
