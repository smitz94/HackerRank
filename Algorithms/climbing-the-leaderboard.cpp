#include <bits/stdc++.h>

using namespace std;

int main()

{
  int n;
  cin >> n;
  int s[n], rank[n];

  int i;

  // scores
  for (i = 0; i < n; i++) {
    cin >> s[i];
  }

  // rank
  rank[0] = 1;
  for (i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) {
      rank[i] = rank[i - 1];
    } else
      rank[i] = rank[i - 1] + 1;
  }

  int m;
  cin >> m;

  int a[m];

  for (i = 0; i < m; i++) {
    cin >> a[i];
  }

  
  int res[m], flag, curr;

  curr = n - 1;

  for (i = 0; i < m; i++) {

    while (a[i] > s[curr] && curr >= 0) {
      curr--;
    }

    if (curr == -1) {
      res[i] = 1;
    } else if (a[i] == s[curr]) {

      res[i] = rank[curr];

    } else if (a[i] < s[curr]) {
      res[i] = rank[curr] + 1;
    }
  }

  for (i = 0; i < m; i++) {
    cout << res[i] << "\n";
  }
}
