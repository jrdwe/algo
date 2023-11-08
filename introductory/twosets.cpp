#include <bits/stdc++.h>

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);

typedef long long ll;

using namespace std;

int main()
{
  ll n;
  cin >> n;

  ll s = n * (n + 1) / 2;
  if (s & 1) {
    cout << "NO\n";
    return 0;
  }

  vector<ll> s1, s2;
  s1.push_back(n);
  s2.push_back(n - 1);

  ll t1{n}, t2{n-1};
  for (ll i{n - 2}; i > 0; i--) {
    if (t1 < t2) {
      s1.push_back(i);
      t1 += i;
    } else {
      s2.push_back(i);
      t2 += i;
    }
  }

  if (t1 != t2) {
    cout << "NO\n";
    return 0;
  }
  
  cout << "YES\n";
  cout << s1.size() << "\n";
  for (ll i{0}; i < s1.size(); i++)
    cout << s1[i] << " \n"[i == s1.size() - 1];

  cout << s2.size() << "\n";
  for (ll i{0}; i < s2.size(); i++)
    cout << s2[i] << " \n"[i == s2.size() - 1];
}

