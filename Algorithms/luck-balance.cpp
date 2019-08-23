#include<bits/stdc++.h>

using namespace std;

struct luck{
    int l,t;
};

bool compare(luck l1,luck l2)
{
    return (l1.l>l2.l);
}


int main()
{

    int n,k;
    cin>>n;
    cin>>k;

    int luc,imp;

    int total_luck=0;
    
    luck contest[n];    

    for(int i=0;i<n;i++)
    {
        cin>>luc;
        cin>>imp;
        contest[i].l=luc;
        contest[i].t=imp;
    } 

    sort(contest,contest+n,compare);
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(contest[i].t==1)
        {
            if(count<=k)
            {
                total_luck=total_luck+contest[i].l;
                count++;
            }
            else{
                total_luck=total_luck-contest[i].l;
            }
        }
        else{
            total_luck=total_luck+contest[i].l;
        }
        
    }

    cout<<total_luck;
}
