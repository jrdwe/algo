#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

#define INF 1000000010
#define ll long long

ll nCr(ll n, ll r) {
  if (r == 0)
    return 1;

  if (r > n)
    return 0;

  // (n choose r) == (n choose (n - r))
  if (r > n / 2)
    return nCr(n, n - r);

  // N * N-1 * N-2 * ... * N-R+1) / (1 * 2 * 3 * ... * R)
  // (N)/1 * (N-1)/2 * (N-2)/3 * ... * (N-R+1)/R
  ll o{1};
  for (ll i{1}; i <= r; i++) {
    o *= n - i + 1;
    o /= i;
  }

  return o;
}
