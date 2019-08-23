// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long> ar) {
long long int sum=0;
int i;
for(i=0;i<ar.size();i++)
{
    sum=sum+ar[i];
}
return sum;
}
