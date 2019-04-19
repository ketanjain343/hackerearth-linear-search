#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	bool flag=0;
	long long int n;
	while(t>0)
	{
		flag=0;
		cin>>n;
		if(n%21==0)
		{
			flag=1;
		}
		while(n>0)
		{
			if(n%100 == 21)
			{
				flag=1;
				break;
			}
			n = n/10;	
		}
		if(flag==1)
		{
			cout<<"The streak is broken!"<<endl;
		}
		else
		{
			cout<<"The streak lives still in our heart!"<<endl;
		}
		t--;
	}
	return 0;
}
