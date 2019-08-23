#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int d, m;
  cin >> d;
  cin >> m;

  int count = 0, sum;

  for (int j = 0; j < n - m + 1; j++) {
    sum = 0;
    for (int i = j; i < j + m; i++) {
      sum = sum + a[i];
    }

    if (sum == d) {
      count++;
    }
  }
  cout <<count;
}
