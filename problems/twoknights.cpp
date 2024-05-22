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
  cin >> n;

  ll c, a;
  for (ll i{1}; i <= n; i++) {
    c = ((i * i) * (i * i - 1)) / 2;    
    a = ((i - 1) * (i - 2) * 4);
    cout << c - a << "\n";
  }
}
