#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

#define INF 1000000010
#define ll long long

void setio(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
  setio("teleport");
  
  ll a, b, x, y;
  cin >> a >> b >> x >> y;

  ll f = min(abs(a - x), abs(a - y));
  ll s = min(abs(b - x), abs(b - y));

  cout << min(f + s, abs(a - b)) << endl;
}
