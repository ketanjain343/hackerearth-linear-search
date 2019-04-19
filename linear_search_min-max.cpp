#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	
	
	long long int sum=0;
	long long int minimum = LLONG_MAX;
	long long int maximum = LLONG_MIN;
	long long int k;
	for(long long int i=0;i<n;i++)
	{
		cin>>k;
		sum+=k;
		if(k> maximum)
		{
			maximum = k;
		}
		if(k < minimum)
		{
			minimum = k;
		}
	}
	cout<<sum-maximum<<" "<<sum-minimum<<endl;
	return 0;
}
