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

int main() { 
	ll n;
	cin >> n;

	ll o{0};
	ll a, b, c;
	for (ll i{0}; i < n; i++) {
		cin >> a >> b >> c;

		if ((a && b) || (a && c) || (b && c))
			o++;
	}

	cout << o << "\n";
}
