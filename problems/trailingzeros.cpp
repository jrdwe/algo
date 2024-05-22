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

  ll i{5}, j{0};
  while (i <= n) {
    j += n / i;
    i *= 5;
  }

  cout << j << "\n";
}
