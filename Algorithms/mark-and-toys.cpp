// Complete the maximumToys function below.
int maximumToys(vector<int> prices, int k) {
int n=prices.size();
int num=-1,sum=0;
int a[n];

for(int i=0;i<n;i++)
{
    a[i]=prices[i];
}

sort(a,a+n);

for(int i=0;i<n;i++)
{
    if(sum<k)
    {
        sum=sum+a[i];
        num++;
    }
}

return num;


}
