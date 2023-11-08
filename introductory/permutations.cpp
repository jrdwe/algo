#include <bits/stdc++.h>

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;

using namespace std;

int main() 
{
  fastio();

  ll n;
  // point of fastio is to speed up cin
  scanf("%lld", &n);

  if (n > 1 && n < 4) {
    cout << "NO SOLUTION\n";
    return 0;
  }

  for (ll i{2}; i <= n; i += 2)
    cout << i << " ";

  for (ll i{1}; i <= n; i += 2)
    cout << i << " ";

  cout << "\n";
}