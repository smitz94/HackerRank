#include <bits/stdc++.h>

using namespace std;



int main()
{
	string s1,s2;
	int result;
	int freq1[26]={0},freq2[26]={0};
	
	
	cin>>s1;
	cin>>s2;
	
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	
	int count=0,j=0;
	char counter='a';

	for(int i=0;i<26;i++)
		{	
			count=0;
			while(counter==s1[j])
			{
				count++;
				j++;
			}
			freq1[i]=count;
			counter=counter+1;
		}
		cout<<"\n";
		for(int i=0;i<26;i++)
		{
			cout<<freq1[i]<<" ";
		}
		
		j=0;
		counter='a';
		count=0;
		
		for(int i=0;i<26;i++)
		{	
			count=0;
			while(counter==s2[j])
			{
				count++;
				j++;
			}
			freq2[i]=count;
			counter=counter+1;
		}
		
		cout<<"\n";
		for(int i=0;i<26;i++)
		{
			cout<<freq2[i]<<" ";
		}
		
		result=0;
		for(int i=0;i<26;i++)
		{
			result=result+abs(freq1[i]-freq2[i]);
			
		}
		
		result=result/2;
		cout<<"\n"<<result;
		
}

