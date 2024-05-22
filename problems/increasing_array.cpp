#include <stdio.h>

using namespace std;

#define ll long long

int main() {
  ll n;
  scanf("%lld", &n);

  ll e, a[n];
  for (int i{0}; i < n; i++) {
    scanf("%lld", &e);
    a[i] = e;
  }

  ll s{0};
  for (ll i{0}; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      s += a[i] - a[i + 1];      
      a[i + 1] += a[i] - a[i + 1];      
    }
  }

  printf("%lld \n", s);
}
