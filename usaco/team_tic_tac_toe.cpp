#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>

using namespace std;

#define INF 1000000010
#define ll long long

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

void setio(string st) {
	freopen((st + ".in").c_str(), "r", stdin);
	freopen((st + ".out").c_str(), "w", stdout);
}

constexpr int WIDTH = 3;

vector<char> game(9); 		 // game results
set<set<char>> winners[4]; // 0 + 3 = 4, at most three players in a row

void check(vector<ii> coords) {
	set<char> entry;
	for (const ii &p : coords) {
		entry.insert(game[p.first * WIDTH + p.second]);
	}

	winners[entry.size()].insert(entry);
}

int main() {
	setio("tttt");

	// read in input
	for (int i{}; i < game.size(); i++) {
		cin >> game[i];
	}

	// insert rows
	for (int i{}; i < WIDTH; i++) {
		check({{i, 0}, {i, 1}, {i, 2}});
	}

	// insert columns
	for (int i{}; i < WIDTH; i++) {
		check({{0, i}, {1, i}, {2, i}});
	}

	// insert diagonals
	check({{0, 0}, {1, 1}, {2, 2}});
	check({{2, 0}, {1, 1}, {0, 2}});

	// output to user
	cout << winners[1].size() << "\n" << winners[2].size() << endl;
}