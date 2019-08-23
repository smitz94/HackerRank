#include <bits/stdc++.h>

using namespace std;

int pairs(int *arr,int n,int k)
{
    int count=0;

    unordered_map<int,int> umap;
    for(int i=0;i<n;i++)
    {
        umap[arr[i]]++;
    }

    int val;
    unordered_map<int,int> :: iterator it;

    for(int i=0;i<n;i++)
    {
        val=arr[i]+k;
        it=umap.find(val);
        if(it!=umap.end())
        {
            count++;
        }
        
    }

    return count;
}


int main()
{

int n,k;

cin>>n;
cin>>k;

int arr[n];

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

int ans= pairs(arr,n,k);

cout<<ans;

}
