#include <iostream>

using namespace std;

int main() {

	int money, n, total = 0, cost, count;

	cin >> money;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cost >> count;
		total += cost * count;
	}
	if (total == money)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}