#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = n; i > 1; i -= 4)
		cout << "long ";
	cout << "int";

	return 0;
}