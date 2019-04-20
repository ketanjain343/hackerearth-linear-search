#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int* arr = new long long int[n+1];
	memset(arr,0,(n+1)*(sizeof(long long int)) );
	long long int c;
	for(long long int i=0;i<n;i++)
	{
		cin>>c;
		arr[c]++;
	}
	long long int k;
	cin>>k;
	long long int res=-1;
	for(res=1;res<=n;res++)
	{
		if(arr[res]==k)
		{
			break;
		}
	}
	cout<<res;

	delete[] arr;
	
		
	return 0;
}
