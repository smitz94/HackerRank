#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  cin >> n;

  long a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }

  sort(a, a + n);

  long min, diff;
  min = abs(a[0] - a[1]);
  for (int i = 0; i < n - 1; i++) {
    diff = abs(a[i] - a[i+1]);
    if (diff < min)
      min = diff;
  }

  cout << min;
}
