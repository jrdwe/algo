#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

#define INF 1000000010
#define ll long long

#define TIME 1001

void setio(string st) {
	freopen((st + ".in").c_str(), "r", stdin);
	freopen((st + ".out").c_str(), "w", stdout);
}

int main() {
  setio("blist");

	ll n;
  cin >> n;

	vector<ll> slots(TIME);

	ll s, t, b;
	for (ll i{0}; i < n; i++) {
		cin >> s >> t >> b;

		slots[s] = b;
		slots[t] = -1 * b;
	}

	ll output{0}, roll{0};
	for (ll i{0}; i < TIME; i++) {
		roll += slots[i];
		output = max(output, roll);
	}

	cout << output << "\n";
}