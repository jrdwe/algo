#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

#define INF 1000000010
#define ll long long

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);

ll ans(ll x, ll y) {
  ll s = max(x, y) * max(x, y);
  ll l = (max(x, y) * 2) - 2;

  if ((x >= y && !(s & 1)) || (y >= x && (s & 1))) {
    return s - (min(x, y) - 1);
  } else {
    return (s - l) + (min(x, y) - 1);
  }
}

int main() {
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
