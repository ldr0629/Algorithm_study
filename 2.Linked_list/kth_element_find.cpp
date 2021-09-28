#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> li;
	list<int>::iterator find_iter;
	int k;
	cout<<"k 입력 : ";
	cin>>k;
	
	for(int i = 0; i<10; i++) {
		li.push_back(i+1);
	}
	
	for(auto d : li) {
		cout<<d<<' ';
	}
	cout<<endl;
	 
	li.reverse();
	find_iter = li.begin(); 
	for(int i = 1; i<k; i++) {
		find_iter++;
	}
	
	cout<<"역순에서 "<<k<<"번째 원소는 "<<*find_iter<<" 입니다."; 
}
