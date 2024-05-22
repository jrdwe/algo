#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

#define INF 1000000010
#define ll long long

#define WORSTCASE 15

void setio(string st) {
	freopen((st + ".in").c_str(), "r", stdin);
	freopen((st + ".out").c_str(), "w", stdout);
}

int main() {
  setio("lostcow");

	ll x, y;
  cin >> x >> y;

	if (x == y) { cout << 0 << "\n"; return 0; }

	ll t{};
	for (ll p{x}, m{1}, i{1}; i <= WORSTCASE; i++) {
		ll j = x + m;

		t += abs(j - p);
		m *= -2;

		if (j >= y && p < y && (i & 1)) { // overshot
			t -= (j - y); break;
		} else if (j <= y && p > y && !(i & 1)) { // undershot
			t -= (y - j); break;
		}

		p = j;
	}

	cout << t << "\n";
}

