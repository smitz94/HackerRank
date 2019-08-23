#include <bits/stdc++.h>

using namespace std;

int binarysearch(string s,int l,int r,int x)
{
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (s[m] == x) 
            return 1; 
  
        // If x greater, ignore left half 
        if (s[m] < x) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
   
    return -1; 
}

int main()
{
    int p;
    cin>>p;

    for(int k=0;k<p;k++)
    {
      string s1, s2;
      int result;

      vector<char> vec(27);

      cin >> s1;
      cin >> s2;

      sort(s1.begin(), s1.end());
      sort(s2.begin(), s2.end());

      int curr = 0;
      vec[0] = s1[0];

      for (int i = 1; i < s1.length(); i++) {
        if (vec[curr] != s1[i]) {
          curr++;
          vec[curr] = s1[i];
        }
      }

      vec.resize(curr);

      for (int i = 0; i < curr + 1; i++) {
        result = binarysearch(s2, 0, s2.length(), vec[i]);
        if (result == 1) {
          cout << "YES"<<"\n";
          break;
        }
      }
      if(result==-1)
      {
          cout<<"NO"<<"\n";
      }
    }

}
