#include <bits/stdc++.h>

using namespace std;

int main()

{
  long s, t, a, b, m, n;

  cin >> s;
  cin >> t;
  cin >> a;
  cin >> b;
  cin >> m;
  cin >> n;

  long apple[m], orange[n];

  for (int i = 0; i < m; i++) {
    cin >> apple[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> orange[i];
  }

  long count_apple = 0, count_orange = 0;

  for (int i = 0; i < m; i++) {
    apple[i] = apple[i] + a;
  }

  for (int i = 0; i < n; i++) {
    orange[i] = orange[i] + b;
  }

  for (int i = 0; i < m; i++) {
    if (apple[i] >= s && apple[i] <= t)
      count_apple++;
  }

  for (int i = 0; i < n; i++) {
    if (orange[i] <= t && orange[i] >= s)
      count_orange++;
  }

  cout << count_apple << "\n";
  cout << count_orange;
}
