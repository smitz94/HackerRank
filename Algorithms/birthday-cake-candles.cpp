#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);

  int max = a[n - 1];
  int count = 1;

  for (int i = n - 2; i >= 0; i--) {
    if (max == a[i]) {
      count++;
    }
  }

  cout << count;
}
