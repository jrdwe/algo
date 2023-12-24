#include <bits/stdc++.h>
#include <cstdio>

typedef long long ll;

using namespace std;

void setio(string st) {
	freopen((st + ".in").c_str(), "r", stdin);
	freopen((st + ".out").c_str(), "w", stdout);
}

int main()
{
  setio("shuffle");

	ll n;
  cin >> n;

	vector<ll> sh(n);
	vector<ll> id(n);

	for (ll &i : sh) { cin >> i; }
	for (ll &i : id) { cin >> i; }

	for (ll l{0}; l < 3; l++) {
		vector<ll> p(n);
		for (ll i{0}; i < n; i++) { p[i] = id[sh[i] - 1]; }
		id = p;
	}

	for (ll i{0}; i < n; i++)
		cout << id[i] << "\n";
}

