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
  setio("teleport");
  
  ll a, b, x, y;
  cin >> a >> b >> x >> y;

  ll f = min(abs(a - x), abs(a - y));
  ll s = min(abs(b - x), abs(b - y));

  cout << min(f + s, abs(a - b)) << endl;
}
