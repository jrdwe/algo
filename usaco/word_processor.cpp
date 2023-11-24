#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void setio(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
  setio("word");

  ll n, k;
  cin >> n >> k;

  vector<string> v;

  string j;
  for (ll i{0}; i < n; i++) {
    cin >> j;
    v.push_back(j);
  }

  ll c{0};
  for (size_t i{0}; i < v.size(); i++) {   
    if (v[i].size() + c > k) { cout << "\n"; c = 0; }
    if (c > 0 && c != k) { cout << " "; }

    cout << v[i];
    c += v[i].size();
  }

  cout << "\n";
}
