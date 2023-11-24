#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
  ll k, n, w;
  cin >> k >> n >> w;

	ll t{0};
	for (ll i{1}; i <= w; i++) {
		t += (i * k);
	}	

  cout << (t - n <= 0 ? 0 : t - n) << endl;
}
