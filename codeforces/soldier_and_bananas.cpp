#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

#define INF 1000000010
#define ll long long

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

using namespace std;

int main() {
  ll k, n, w;
  cin >> k >> n >> w;

	ll t{0};
	for (ll i{1}; i <= w; i++) {
		t += (i * k);
	}	

  cout << (t - n <= 0 ? 0 : t - n) << endl;
}
