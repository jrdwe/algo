#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void setio(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
  vector<ll> v;

  for (ll i{0}, k{0}; i < 7; i++) {
    cin >> k;
    v.push_back(k);
  }

  sort(v.begin(), v.end());
  cout << v[0] << " " << v[1] << " " << v[6] - (v[0] + v[1])<< "\n";
}
