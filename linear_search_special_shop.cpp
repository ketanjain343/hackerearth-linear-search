#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	long long int n,a,b;
	while(t>0)
	{
		cin>>n>>a>>b;
		long long int x2 = (b*n) / (b+a);
		long long int x1 = x2-1;
		long long int x3 = x2+1;
		long long int r1 = a*x1*x1 + b*(n-x1)*(n-x1);
		long long int r2 = a*x2*x2 + b*(n-x2)*(n-x2);
		long long int r3 = a*x3*x3 + b*(n-x3)*(n-x3);
		
		cout<<min(r1,min(r2,r3))<<endl;
		
		t--;
	}
	return 0;
}
