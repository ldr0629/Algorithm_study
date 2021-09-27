#include <iostream>
#include <string.h>
#define SIZE 30
using namespace std;

int main() {
	int cnt = 0;
	bool check; 
	char sen[SIZE];
	cin>>sen;
	
	for(int i = 0; i<strlen(sen); i++) {
		char c = sen[i];
		check = false;
		for(int j = i+1; j<strlen(sen); j++) {
			if(c == sen[j]) {
				cout<<"같은 문자 중복"<<endl;
				check = true;
				break;
			}
		}
		
		if(check) {
			break;	
		}
		cnt++;
	}
	
	if(cnt == strlen(sen)) {
		cout<<"중복 없음"<<endl;
	}
}
