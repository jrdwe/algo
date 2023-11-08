#include <bits/stdc++.h>

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;

using namespace std;

int main()
{
  fastio();

  ll n;
  cin >> n;

  ll c, a;
  for (ll i{1}; i <= n; i++) {
    c = ((i * i) * (i * i - 1)) / 2;    
    a = ((i - 1) * (i - 2) * 4);
    cout << c - a << "\n";
  }
}
