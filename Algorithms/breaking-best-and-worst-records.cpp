#include <bits/stdc++.h>

using namespace std;

int main()

{
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int max = a[0], countmax = 0;
  int min = a[0], countmin = 0;

  for (int i = 1; i < n; i++) {
    if (max < a[i]) {
      max = a[i];
      countmax++;
    }

    if (min > a[i]) {
      min = a[i];
      countmin++;
    }
  }

  cout << countmax << " " << countmin;
}
