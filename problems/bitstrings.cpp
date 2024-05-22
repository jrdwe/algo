#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

#define INF 1000000010
#define ll long long

int main() {
  ll n;
  cin >> n;

  ll s{1};
  for (ll k{1}; k <= n; k++)
    s = (s * 2) % (ll)(1e9 + 7);

  cout << s << "\n";
}
