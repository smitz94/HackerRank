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

  int count = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 != 0 && i + 1 < n) {
      a[i] = a[i] + 1;
      a[i + 1] = a[i + 1] + 1;
      count = count + 2;
    }
  }

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + a[i];
  }

  if (sum % 2 == 0) {
    cout << count;
  } else {
    cout << "NO";
  }

  return 0;
}
