#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int* arr = new long long int[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>arr[i];
	}	
	
	long long int* val = new long long int[n];
	
	val[0] = arr[0] >0 ?arr[0]:0;
	long long int maxv=LLONG_MIN;
	
	for(long long int i=1;i<n;i++)
	{
		if(val[i-1] + arr[i] >= 0)
		{
			val[i] =  val[i-1] + arr[i];
		}
		else
		{
			val[i] = 0;
		}
		if(val[i] > maxv)
		{
			maxv=val[i];
		}
	}
	
	if(maxv==0)
	{
		cout<<"0 0";
	}
	
	bool flag=1;
	long long int ctr=0;
	
	for(long long int i=0;i<n;i++)
	{
		if(val[i]==maxv && flag==1)
		{
			flag=0;
			ctr++;
		}
		if(val[i]==0)
		{
			flag=1;
		}
	}
	
	cout<<maxv<<" "<<ctr;
	//free mem
	delete[] arr;
	delete[] val;
	
	return 0;
}
