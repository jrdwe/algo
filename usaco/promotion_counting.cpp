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
  setio("promote");
  
	ll a, b, c, d, e, f, g, h;
	cin >> a >> b >> c >> d 
		>> e >> f >> g >> h;

	ll arr[4] = {b - a, d - c, f - e, h - g};

	vector<ll> vec;
	ll i{4}, s{0};

	while (--i > 0) {
		s += arr[i];
		vec.push_back(s);
	}

	reverse(vec.begin(), vec.end());

	for (ll i : vec)
		cout << i << endl;
}