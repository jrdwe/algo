#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

#define INF 1000000010
#define ll long long

void setio(string st) {
	freopen((st + ".in").c_str(), "r", stdin);
	freopen((st + ".out").c_str(), "w", stdout);
}

int main() {
  setio("speeding");

	ll n, m;
  cin >> n >> m;

	ll a{}, b{};
	vector<ll> lim(100);
	vector<ll> act(100);

	for (ll i{}, r{}; i < n; i++) {
		cin >> a >> b;
		for (ll j{r}; j < r + a; j++) { lim[j] = b; }
		r += a;
	}

	for (ll i{}, r{}; i < m; i++) {
		cin >> a >> b;
		for (ll j{r}; j < r + a; j++) { act[j] = b; }
		r += a;
	}

	ll o{};
	for (ll i{}; i < lim.size(); i++)
		o = max(o, act[i] - lim[i]);

	cout << o << "\n";
}

