// 搬運
#include <iostream>
using namespace std;

int ways[7490] = { 1 };

void Initialize() {
	int changes[5] = { 1, 5, 10, 25, 50 };
	for (int i = 0; i < 5; ++i)
		for (int j = changes[i]; j < 7490; ++j)
			ways[j] += ways[j - changes[i]];
}

int main() {
	cin.sync_with_stdio(false); cin.tie(nullptr);
	Initialize();
	int money;
	while (cin >> money)
		cout << ways[money] << '\n';
}