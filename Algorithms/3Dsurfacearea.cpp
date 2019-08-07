#include <bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,H,W,sumh=0,sumv=0,boundary=0,compulsory;
	cin>>H;
	cin>>W;
	
	int A[H][W];
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		cin>>A[i][j];
	}
	
	//horizontal sweep
	for(i=0;i<H-1;i++)
	{
		for(j=0;j<W;j++)
		{
			sumh=sumh+abs(A[i][j]-A[i+1][j]);
		}
	}
	cout<<"sumh= "<<sumh<<"\n";
	
	//vertical sweep
	for(i=0;i<W-1;i++)
	{
		for(j=0;j<H;j++)
		{
			sumv=sumv+abs(A[j][i]-A[j][i+1]);
		}
	}
	
	cout<<"sumv= "<<sumv<<"\n";
	
	//boundary
	for(i=0;i<H;i++)
	{
		boundary=boundary+A[i][0]+A[i][W-1];
	}
	
	for(j=0;j<W;j++)
	{
		boundary=boundary+A[0][j]+A[H-1][j];
	}
	
	cout<<"boundary= "<<boundary<<"\n";
	
	//compulsory
	compulsory=2*H*W;
	
	//cost
	int cost=sumh+sumv+boundary+compulsory;
	
	cout<<"cost= "<<cost;
}
