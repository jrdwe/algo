#include <bits/stdc++.h>
#include <cstdio>

typedef long long ll;

using namespace std;

void setio(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
  setio("mixmilk");

	ll c1, m1, c2, m2, c3, m3;
  cin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;

	if (m1 + m2 > c2) {
		m1 = m1 + m2 - c2;
		m2 = c2;
	} else {
		m2 += m1;
		m1 = 0;
	}

	if (m2 + m3 > c3) {
		m2 = m2 + m3 - c3;
		m3 = c3;
	} else {
		m3 += m2;
		m2 = 0;
	}

	if (m1 + m3 > c1) {
		m3 = m3 + m1 - c1;
		m1 = c1;
	} else {
		m1 += m3;
		m3 = 0;
	}

	if (m1 + m2 > c2) {
		m1 = m1 + m2 - c2;
		m2 = c2;
	} else {
		m2 += m1;
		m1 = 0;
	}

	cout << m1 << endl;
	cout << m2 << endl;
	cout << m3 << endl;
}
