#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	size_t length;
	cin >> length;
	for (size_t i = 0; i < length; i++) {
		int a, b;
		cin >> a >> b;
		if (a % b == 0) {
			cout << 0 << '\n';
			continue;
		}
		if (a < b) {
			cout << b - a << '\n';
			continue;
		}
		int div = (a/b)+1;
		int ans = (b*div)-a;
		cout << ans << '\n';
	}

	
	return 0;
}
