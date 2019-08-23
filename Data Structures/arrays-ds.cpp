// Complete the reverseArray function below.
vector<int> reverseArray(vector<int> a) {
    int i,N,j=0;
    N= a.size();
    vector<int> b;
    b=a;
    for(i=N-1;i>=0;i--)
    {
          a[j]=b[i];
          j++;
    }

        return a;

}
