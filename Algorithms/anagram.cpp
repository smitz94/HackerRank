#include <bits/stdc++.h>

using namespace std;

int main() {
  int q;
  cin >> q;
  for (int p = 0; p < q; p++) {
    string s, s1, s2;
    int result;
    int freq1[26] = {0}, freq2[26] = {0};

    cin >> s;

    if (s.length() % 2 != 0) {
      cout << "-1"<<"\n";
    } else {
      int k = s.length();
      s1 = s.substr(0, s.length() / 2);
      s2 = s.substr(s.length() / 2, s.length());

      sort(s1.begin(), s1.end());
      sort(s2.begin(), s2.end());

      int count = 0, t = 0;
      char counter = 'a';

      for (int i = 0; i < 26; i++) {
        count = 0;
        while (counter == s1[t]) {
          count++;
          t++;
        }
        freq1[i] = count;
        counter = counter + 1;
      }

      t = 0;
      counter = 'a';
      count = 0;

      for (int i = 0; i < 26; i++) {
        count = 0;
        while (counter == s2[t]) {
          count++;
          t++;
        }
        freq2[i] = count;
        counter = counter + 1;
      }

      result = 0;
      for (int i = 0; i < 26; i++) {
        result = result + abs(freq1[i] - freq2[i]);
      }

      result = result / 2;
      cout <<result<<"\n";
    }
  }
}
