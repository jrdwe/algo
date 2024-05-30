#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

#define INF 1000000010
#define ll long long

void setio(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
  setio("cbarn");
		
	ll n;
	cin >> n;

	vector<ll> input(n);
	for (ll i{0}; i < input.size(); i++) {
		cin >> input[i];
	}	

	// Store total outcome for each possible option
	vector<ll> output(n);

	// Loop for every single door
	for (ll i{0}; i < n; i++) {
		// How far around the barn you are
		ll steps = 1;

		// Loop over all cows
		for (ll j{i + 1}; j < n + i; j++) {
			output[i] += (input[j % n] * steps++);
		}
	}

	// Output the minimum 
	cout << *min_element(begin(output), end(output)) << endl;
}
