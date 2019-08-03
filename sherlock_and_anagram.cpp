#include <bits/stdc++.h>


using namespace std;


int sherlock_and_anagram(string s)
{
    int n=s.length();
    unordered_map <string, int> umap;
    string sub;
    int noe; // number of elements paired with each other every time we have a anagram
    
    for(int i=0;i<n;i++)
    {
        for(int len=1;len<=n-i;len++)
        {
            sub=s.substr(i,len);
            sort(sub.begin(),sub.end());
            
            if(umap.find(sub)==umap.end())
            {
                umap[sub]=0;
            }
            else{
                noe=(1+(sqrt(1+8*umap[sub])))/2;
                umap[sub]= (noe*(noe+1))/2;
            }
        }
    }

    
    int count=0;
    
    
    unordered_map <string,int> :: iterator it;
    
    for(it=umap.begin();it!=umap.end();it++)
    {
        count=count+it->second;
    }
    
    return count;
}
int main()
{
    int q;
    cin >>q;
    
    while(q--)
    {
        string s;
        cin>>s;
        
        int ans= sherlock_and_anagram(s);
        
        cout<<ans<<endl;
    }
}

