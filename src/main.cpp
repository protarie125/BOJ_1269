#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	auto a = set<int>{};
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		a.insert(x);
	}

	auto b = set<int>{};
	for (int i = 0; i < m; ++i) {
		int x;
		cin >> x;
		b.insert(x);
	}

	auto ct = int{ 0 };
	for (const auto& x : a) {
		if (b.end() == b.find(x)) {
			++ct;
		}
	}

	for (const auto& x : b) {
		if (a.end() == a.find(x)) {
			++ct;
		}
	}

	cout << ct;

	return 0;
}