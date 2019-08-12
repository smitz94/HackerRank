#include <bits/stdc++.h>

using namespace std;

int main()

{	
	int m,n;
	cin>>m;
	cin>>n;
	
	
	vector<string> mag(m);
	vector<string> note(n);
	
	string op;
	
	for(int i=0;i<m;i++)
	{
		cin>>op;
		mag[i]=op;
	}
	
	for(int i=0;i<n;i++)
	{
		cin>>op;
		note[i]=op;
	}
	
	unordered_map<string, int> mag_f;
	
	int count;
		
	for(int i=0;i<m;i++)
	{
		mag_f[mag[i]]++;		
	}
	
	unordered_map<string, int> note_f;
		
	for(int i=0;i<n;i++)
	{
		note_f[note[i]]++;		
	}	
	
	
	unorder_map<string,int> :: iterator itr_mag;
	unorder_map<string,int> :: iterator itr_note;
	
	bool flag=1;	
	for(itr_note=note_f.begin();itr_note!=note_f.end();itr_note++)
	{
		itr_mag= mag_f.find(itr_note->first);
		if(itr_mag->first==itr_note->first && itr_mag->second>=itr_note->second)
		{
			flag=1;
			cout<<itr_mag->first<<"\n";
		}
		else{
			flag=0;
			break;
		}
	}
	
	if(flag==1)
	{
		cout<<"Yes";
		
	}
	else{
		cout<<"No";
	}
}
