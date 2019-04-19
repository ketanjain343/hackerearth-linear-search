#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	long long int length;
	long long int breadth;
	long long int ctr=0;
	while(t>0)
	{
		cin>>length;
		cin>>breadth;
		double l = (double) length;
		double b = (double) breadth;
		double ratio = l/b;
		double ratio2 = b/l;
		if(  ( ratio>=1.600000  && ratio <=1.700000)  ||  ( ratio2 >=1.600000  && ratio2 <=1.700000)       )
		{
			ctr++;
		}
		t--;
	}
	cout<<ctr;
	
	return 0;
}
