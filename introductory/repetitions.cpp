#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  cin >> s;

  long long m{-1}, c{1};
  long long n = s.size();

  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }

  for (int i = 0; i < n - 1; i++) {
    if (s[i] != s[i + 1]) {
      c = 1;
    } else {
      c++;
    }

    m = (c > m) ? c : m;
  }

  cout << m << endl;
}
