#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    sort(a,a+n);

    long j=0,miles=0;
    for(int i=n-1;i>=0;i--)
    {
        miles=miles+((pow(2,j))*a[i]);
        j++;
    }

    cout<<miles;

}
