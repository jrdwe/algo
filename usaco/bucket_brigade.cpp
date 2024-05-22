#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

#define ll long long

void setio(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
  setio("buckets");

	ll bx, by; // barn location
  
	vector<vector<char>> vec(10, vector<char>(10));
	for (ll i{0}; i < 10; i++) {
		for (ll j{0}; j < 10; j++) {
			cin >> vec[i][j];
			if (vec[i][j] == 'B') { bx = i; by = j; }
		}
	}	

	set<pair<ll, ll>> s;
	queue<pair<pair<ll, ll>, ll>> q;
	q.push(make_pair(make_pair(bx, by), 0));

	while (!q.empty()) {
		pair<pair<ll,ll>, ll> curr = q.front();
		q.pop();

		ll x = curr.first.first;
		ll y = curr.first.second;
		ll c = curr.second; // step count
				
		if (x >= 10 || x < 0 || y >= 10 || y < 0 || vec[x][y] == 'R' || 
				s.find(make_pair(x, y)) != s.end()) {
			continue;
		}

		s.insert(make_pair(x, y));

		if (vec[x][y] == 'L') { cout << c - 1 << "\n"; return c - 1; }

		vector<pair<ll,ll>> directions {make_pair(x + 1, y), 
																		make_pair(x - 1, y),
																		make_pair(x, y + 1),
																		make_pair(x, y - 1)};
		
		for (pair<ll,ll> d : directions) {
			q.push(make_pair(d, c + 1));
		}
	}
}
