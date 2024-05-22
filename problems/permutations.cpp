#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

#define INF 1000000010
#define ll long long

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
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