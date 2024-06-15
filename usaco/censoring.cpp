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

int main() {
	setio("censor");

	string text;
	string word;
	cin >> text >> word;

	string output;
	for (int i{}; i < text.size(); i++) {
		output += text[i];
		if (output.size() > word.size() &&
				output.substr(output.size() - word.size()) == word) {
			
			output.erase(output.size() - word.size(), word.size());
		}
	}

	cout << output << endl;
}