void miniMaxSum(vector<int> arr) {
    int n=arr.size();
    long a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=arr[i];
    }
    sort(a,a+n);
    long minsum=0,maxsum=0;
    for(int i=0;i<n-1;i++)
    {
        minsum=minsum+a[i];
    }

    for(int i=1;i<n;i++)
    {
        maxsum=maxsum+a[i];
    }

    cout<<minsum<<" "<<maxsum;

}
