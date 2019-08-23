// Complete the absolutePermutation function below.
vector<int> absolutePermutation(int n, int k) {
  
  vector <int> a;
  a.resize(n);
  if (!k) {
    for (int i = 0; i < n; ++i)
      a[i]=i+1;
  }

  // Check whether permutation is feasible or not
  else if (n % (2 * k) != 0)
    {a.resize(1);
     a[0]=-1;}

  else {
    for (int i = 0; i < n; ++i) {
      // Put i + k + 1 candidate if position is
      // feasible, otherwise put the i - k - 1
      // candidate
      if ((i / k) % 2 == 0)
            a[i]=i+k+1;
      else
        a[i]=i-k+1;
    }
  }

  return a;
}
