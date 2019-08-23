#include <iostream>
using namespace std;
int main() {
  int n, i, page = 1, count1 = 1, special = 0, ques = 1, k;
  cin >> n >> k;
  int a[n];
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (i = 0; i < n; i++) {
    while (ques <= a[i]) {
      if (count1 <= k) {
        if (ques == page) {
          ++special;
        }
        ++ques;
        ++count1;
      } else {
        page += 1;
        count1 = 1;
      }
    }
    ques = 1;
    page += 1;
    count1 = 1;
  }
  cout << special;
  return 0;
}
