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
  
	vector<ll> pos(3);
	for (ll i{}; i < 3; i++)
		pos[i] = i;

	vector<ll> cnt(3);
	for (ll i{}; i < n; i++) {	
		ll a, b, g;
		cin >> a >> b >> g;

		a--, b--, g--; // ensure indices are valid 

		swap(pos[a], pos[b]);
		cnt[pos[g]]++;	
	}

	cout << max({cnt[0], cnt[1], cnt[2]}) << "\n"; // requires tuple
}
