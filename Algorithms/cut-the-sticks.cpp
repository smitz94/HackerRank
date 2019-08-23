#include <bits/stdc++.h>

using namespace std;

int find_min(int a[], int n) {
  int min = 0, flag = 1, i = 0;
  while (flag > 0) {
    if (a[i] > 0) {
      min = a[i];
      flag = 0;
    }
    i++;
  }
  return min;
}

int pos_min(int a[], int min, int n) {
  int j;
  int flag = 1, i = 0;
  while (flag > 0) {
    if (a[i] == min) {
      j = i;
      flag = 0;
    }
    i++;
  }
  return j;
}

int main()

{
  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);

  int count = n;
  int min, j;
  while (count > 0) {
    cout << count << "\n";

    min = find_min(a, n);
    // cout<<"min:"<<min<<"\n";
    j = pos_min(a, min, n);
    // cout<<"j: "<<j<<"\n";

    for (int i = j; i < n; i++) {
      a[i] = a[i] - min;
    }
    for (int i = j; i < n; i++) {
      if (a[i] == 0)
        count--;
    }
  }
}
