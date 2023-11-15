#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
  ll n;
  cin >> n;

  ll i{5}, j{0};
  while (i <= n) {
    j += n / i;
    i *= 5;
  }

  cout << j << "\n";
}
