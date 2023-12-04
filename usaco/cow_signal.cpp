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
  setio("cowsignal");

	ll m, n, k;
  cin >> m >> n >> k;

	vector<vector<char>> in(m, vector<char>(n));

	char r;
	for (ll i{}; i < m; i++)
		for (ll j{}; j < n; j++) { cin >> r; in[i][j] = r; }

	for (ll i{}; i < m; i++) {
		for (ll t{}; t < k; t++) { 
			for (ll j{}; j < n; j++) { cout << string(k, in[i][j]); }
			cout << "\n";
		}
	}
}

