#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <tuple>
#include <queue>
#include <map>
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

#define MILK_PROD 7
#define COWS 3

int main() {
	setio("measurement");

	int entries;
	cin >> entries;

	map<string, int> cows;
	vector<tuple<int, string, int>> days;

	for (int i{}; i < entries; i++) {
		int day;
		string cow;
		int delta;
		cin >> day >> cow >> delta;

		cows[cow] = MILK_PROD; // start with a production of seven
		days.push_back(make_tuple(day, cow, delta));
	}

	sort(days.begin(), days.end(),
		[](const auto &d1, const auto &d2) { return get<0>(d1) < get<0>(d2); });

	int output{}; // store the number of times we change top place
	map<int, int> production{{MILK_PROD, COWS}}; // everyone starts the same

	for (auto record : days) {
		// milk produced by the cow previously
		int milk_production = cows[get<1>(record)];
	
		// checks if current cow was holding the record prior to current day
		bool old_top = milk_production == production.rbegin()->first;

		// remove current cow's place in the map
		int old_count = production[milk_production];

		// decreae milk count
		production[milk_production]--;

		// clean prior highs if empty
  	if (production[milk_production] == 0) {
			production.erase(milk_production);
		}

		// update current cow's values
		milk_production += get<2>(record);
		cows[get<1>(record)] = milk_production;

		// increase milk production
		production[milk_production]++;
	
		// check new status
		bool new_top = milk_production == production.rbegin()->first;

		// check current placements
		if ((old_top && !new_top) || (!old_top && new_top)) {
			// moved down or up the rankings
			output++;
		} else if (old_top && new_top && production[milk_production] != old_count) {
			// checks that they didn't simply break their own record
			output++;
		}
	}

	cout << output << endl;
}