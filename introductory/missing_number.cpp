#include <stdio.h>

using namespace std;

int main()
{
  long long n;
  scanf("%lld", &n);

  long long c, s{0};

  for (int i = 1; i < n; i++) {
    scanf("%lld", &c);
    s += c;
  }

  printf("%lld \n", (n * (n + 1)) / 2 - s);
}