#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

#define INF 1000000010
#define ll long long

int main() {
  string x;
  cin >> x;

  vector<ll> cnt(26, 0);

  for (char c : x)
      cnt[c - 'A']++;

  ll o = 0;
  for (ll x : cnt)
      if (x & 1) 
        o++;

  if (o > 1) { cout << "NO SOLUTION" << "\n"; return 0; }

  string ans = "";
  char ph = '#'; // placeholder
  for (ll i{0}; i < 26; i++) { // letter of alphabet
    char c = 'A' + i;
    if (!(cnt[i] & 1)) {
      ll v = cnt[i] / 2;
      for (ll i{0}; i < v; i++)
        ans += c;
    } else {
      ll v = cnt[i] / 2;
      ph = c;
      for (ll i{0}; i < v; i++)
        ans += c;
    }
  }

  string rev = ans;
  reverse(rev.begin(), rev.end());

  if (ph != '#')
    ans += ph;

  ans += rev;
  cout << ans << "\n";
}
