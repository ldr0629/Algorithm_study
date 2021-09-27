#include <iostream>
#include <string>
using namespace std;

void replace(string str, int size);

int main() {
	string s = "Mr John Smith";
	cout<<s<<endl;
	replace(s, s.length());
}

void replace(string str, int size) {
	string url_str = "";
	
	for(int i = 0; i<size; i++) {
		if(str.at(i) == ' ') {
			url_str += "%20";
			continue;
		}
		url_str += str.at(i);
	}
	cout<<url_str<<endl;
}
