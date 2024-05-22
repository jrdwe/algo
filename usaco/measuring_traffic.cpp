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
  setio("traffic");
  
	int n;
	cin >> n;

	vector<string> t(n);
	vector<int> l(n);
	vector<int> h(n);

	for (int i{0}; i < n; i++) {
		cin >> t[i] >> l[i] >> h[i];
	}

	// prior mile 1
	int lb{0}, ub{INF};
	for (int i{n - 1}; i >= 0; i--) {
		if (t[i] == "none") {
			lb = max(lb, l[i]);
			ub = min(ub, h[i]);
		}	
		
		if (t[i] == "on") {
			lb -= h[i];
			lb = max(lb, 0); // ensure not negative
			ub -= l[i];
		}	
		
		if (t[i] == "off") {
			lb += l[i];
			ub += h[i];
		}	
	}

	cout << lb << " " << ub << "\n";

	// post mile N
	lb = 0;
	ub = INF;

	for (int i{0}; i < n; i++) {
		if (t[i] == "none") {
			lb = max(lb, l[i]);
			ub = min(ub, h[i]);
		}	
		
		if (t[i] == "on") {
			lb += l[i];
			ub += h[i];
		}	
		
		if (t[i] == "off") {
			lb -= h[i];
			lb = max(lb, 0); // ensure not negative
			ub -= l[i];
		}	
	}

	cout << lb << " " << ub << "\n";
}
