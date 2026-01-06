#include<iostream>
#include<string>
using namespace std;

int main (int argc, char *argv[]) {
	string s;
	cin >> s;
	for (size_t i = 0; i < s.length(); i++) {
		if (s[i] == 'H' ||s[i] == 'Q' || s[i] == '9'){
			cout << "YES";
			return 0;
		}
	}
	
	cout << "NO";
	return 0;
}
