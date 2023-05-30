#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int ret = 0;
	char state = '\0';
	for (; n >= 0; n--) {
		char tmp;
		cin.get(tmp);
		if (tmp == state) {
			ret++;
		}
		state = tmp;
	}

	cout << ret;
}
