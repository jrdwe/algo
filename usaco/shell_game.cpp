#include <bits/stdc++.h>
#include <cstdio>

typedef long long ll;

using namespace std;

void setio(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
  setio("shell");

	ll n;
	cin >> n;
  
	vector<tuple<ll,ll,ll>> swaps;

	ll a{}, b{}, g{};
	for (ll i{0}; i < n; i++) {	
		cin >> a >> b >> g;
		swaps.push_back({a, b, g});

	}

	ll m{};
	for (ll i{}; i < 3; i++) {
		vector<ll> vec(3);
		vec[i] = 1; // the simulation for ith round

		ll q{}, w{}, e{}, c{};
		for (ll j{}; j < n; j++) {
			tie(q, w, e) = swaps[j];
			swap(vec[q - 1], vec[w - 1]);

			if (vec[e - 1] == 1)
				c += 1;
		}

		m = max(m, c);
	}

	cout << m << "\n";
}
