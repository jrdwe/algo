#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
  ll n;
  cin >> n;

  ll k, j;
  for (ll i{0}; i < n; i++) {
    cin >> k >> j;

    if ((j + k) % 3 > 0 || min(k, j) * 2 < max(k, j)) {
      cout << "NO" << "\n";
    } else {
      cout << "YES" << "\n";
    }
  }
}
