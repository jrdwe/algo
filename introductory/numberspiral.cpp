#include <bits/stdc++.h>

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);

typedef long long ll;

using namespace std;

ll ans(ll x, ll y) 
{
  ll s = max(x, y) * max(x, y);
  ll l = (max(x, y) * 2) - 2;

  if ((x >= y && !(s & 1)) || (y >= x && (s & 1))) {
    return s - (min(x, y) - 1);
  } else {
    return (s - l) + (min(x, y) - 1);
  }
}

int main()
{
  fastio();

  ll n;
  cin >> n;

  ll x, y;
  vector<ll> out;
  for (ll i{0}; i < n; i++) {
    cin >> x >> y;
    out.push_back(ans(x, y));
  }

  for (ll i : out) {
    cout << i << "\n";
  }
}
