#include <bits/stdc++.h>

using namespace std;

int main() {

  stack<int> s, s_max;

  int n;
  cin >> n;

  int q;
  int element;
  int max;

  while (n--) {
    cin >> q;
    max=0;

    if (q == 1) {
      cin >> element;
      s.push(element);
      if(s.size()==1)
        s_max.push(element);
        
      if (s_max.top() < element)
        s_max.push(element);
        else
            s_max.push(s_max.top());
    }
    

    if (q == 2) {
      s.pop();
      s_max.pop();
    }

    if (q == 3) {
      cout << s_max.top() << endl;
    }
  }
  return 0;
}
