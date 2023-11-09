#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
  ll n;
  cin >> n;

  ll s{1};
  for (ll k{1}; k <= n; k++)
    s = (s * 2) % (ll)(1e9 + 7);

  cout << s << "\n";
}
