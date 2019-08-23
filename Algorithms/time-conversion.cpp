#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  int hh, mm, ss;
  char c, a;
  cin >> hh >> c >> mm >> c >> ss >> a >> c;

  if (a == 'P' && hh != 12)
    hh += 12;
  if (a == 'A' && hh == 12)
    hh = 0;

  cout << setfill('0') << setw(2) << hh << ':' << setw(2) << mm << ':'
       << setw(2) << ss;
  return 0;
}
