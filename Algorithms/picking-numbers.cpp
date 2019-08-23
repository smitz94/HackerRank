/*
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int pickingNumbers(vector<int> a) {
    int n=a.size();
    int b[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }

    sort(b,b+n);
    int count,max=0;
    for(i=0;i<n;i++)
    {   
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(abs(b[i]-b[j])==1 || abs(b[i]-b[j])==0)
            {
                count++;
            }
        }

        if(max<count)
        {
            max=count;
        }

    }
    return max+1;
}
