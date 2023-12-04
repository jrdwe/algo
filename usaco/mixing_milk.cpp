#include <bits/stdc++.h>
#include <cstdio>

typedef long long ll;

using namespace std;

#define BUCKETS 3
#define CYCLES 4

void setio(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
  setio("mixmilk");

	ll c1, m1, c2, m2, c3, m3;
  cin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;

	vector<ll> cap{c1, c2, c3};
	vector<ll> vol{m1, m2, m3};

	for (ll i{}; i < CYCLES; i++) {
		ll k{i % BUCKETS}, j{(i + 1) % BUCKETS};

		ll q = min(vol[k], cap[j] - vol[j]);
		
		vol[k] -= q;
		vol[j] += q;
	}
	
	for (auto i : vol) { cout << i << "\n"; }
}
