#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

#define ll long long

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

void setio(string st) {
	freopen((st + ".in").c_str(), "r", stdin);
	freopen((st + ".out").c_str(), "w", stdout);
}

// global variables
int output{INT32_MAX};
int totalsteps{};
vector<ii> coords{{0, 0}};

void check_steps(ii curr) { 
	for (int i{}; i < coords.size(); i++) { 
		if (curr.first == coords[i].first &&
				curr.second == coords[i].second) {

			output = min(output, totalsteps - i);
		}
	}
}

void take_steps(int steps, ii dir) {
	ii recent = coords.back();

	for (int i{}; i < steps; i++) {
		// create new location
		recent.first += dir.first;
		recent.second += dir.second;

		// increment total count
		totalsteps++;

		// check if new coords exists already
		check_steps(recent);

		// push to the vector
		coords.push_back(recent);
	}
}

int main() {
	setio("mowing");

	int moves{};
	cin >> moves;

	for (int i{}; i < moves; i++) {
		char dir;
		int steps{};
		cin >> dir >> steps;

		if (dir == 'N') {
			take_steps(steps, {0, 1});
		} else if (dir == 'S') {
			take_steps(steps, {0, -1});
		} else if (dir == 'W') {
			take_steps(steps, {-1, 0});
		} else if (dir == 'E') {
			take_steps(steps, {1, 0});
		}
	}

	cout << (output == INT32_MAX ? -1 : output) << endl;
}