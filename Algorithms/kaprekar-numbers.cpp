// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
  int a, b, count, i,flag=0;

  for (i = p; i <= q; i++) {
    a = i;
    count = 0;
    // cout<<a;
    while (a > 0) {
      b = a % 10;
      a = a / 10;

      count++;
    }

    // cout<<"\n count= "<<count;

    long N = pow(i, 2);
    // cout<<"\n square="<<N;

    int c = pow(10, count);
    a = N / c;
    b = N % c;

    /*cout<<"\n"<<a;
    cout<<"\n"<<b<<"\n\n";*/

    if (a + b == i) {
      cout << i << " ";
      flag=1;
    }
  }

  if(flag==0)
  {
      cout<<"INVALID RANGE";
  }
}
