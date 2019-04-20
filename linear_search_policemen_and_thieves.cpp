#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		char** arr = new char*[n];
		for(int i=0;i<n;i++)
		{
			arr[i] = new char[n];
		}
		
		int k;
		cin>>k;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
		
		int ctr=0;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(arr[i][j]=='P')
				{
					int left = j-k>0 ? j-k:0;
					int right = j+k<n?j+k:n-1;
					for(int p=left;p<=right;p++)
					{
						if(arr[i][p]=='T')
						{
							arr[i][p] = 'O';
							ctr++;
							break;
						}
					}				
				}
			}
		}
		cout<<ctr<<endl;
		t--;
	}
	return 0;
}
