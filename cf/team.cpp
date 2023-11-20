#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{ 
	ll n;
	cin >> n;

	ll o{0};
	ll a, b, c;
	for (ll i{0}; i < n; i++) {
		cin >> a >> b >> c;

		if ((a && b) || (a && c) || (b && c))
			o++;
	}

	cout << o << "\n";
}
