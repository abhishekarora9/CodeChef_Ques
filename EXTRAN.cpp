#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		int a[100000];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long int removal;
		if(a[1]-a[0]!=1){
			removal=a[0];
		}
		else if(a[n-1]-a[n-2]!=1)
			removal=a[n-1];
		else for (int i = 0; i < n-1; ++i)
		{
			if(a[i]==a[i+1])
			{
				removal=a[i];
				break;

			}

			
		}
		cout<<removal<<endl;

	}
	return 0;
}