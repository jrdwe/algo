#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

#define INF 1000000010
#define ll long long

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<int> vii;

void setio(string st) {
	freopen((st + ".in").c_str(), "r", stdin);
	freopen((st + ".out").c_str(), "w", stdout);
}

void parse_word(string_view word, vi& m) {
	for (int c : word) {
		// 97 is ASCII 'a'
		m[c - 97]++;
	}
}

void compare_letters(vi& alphabet, vi& front, vi& back) {
	for (int i{}; i < front.size(); i++) {
		int required = max(front[i], back[i]);
		alphabet[i] = max(alphabet[i], alphabet[i] + required);
	}
}

int main() {
	setio("blocks");

	int n;
	cin >> n;

	// final output of letters
	vi alphabet(26);

	string front, back;
	for (int i{}; i < n; i++) {
		// read in a single pair
		cin >> front >> back;

		// parse out the character's in ascii for each word
		vi front_tally(26);
		parse_word(front, front_tally);
		vi back_tally(26);
		parse_word(back, back_tally);

		// add to existing total counter
		compare_letters(alphabet, front_tally, back_tally);
	}

	// print max required char's
	for (int i{}; i < 26; i++) {
		cout << alphabet[i] << "\n";
	}
}