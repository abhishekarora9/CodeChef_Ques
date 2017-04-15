#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	long long int t;
	cin >>t;
	while(t--){
		long long int n;
		cin>>n;
		int a[100000];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for (int i = 0; i < n; ++i)
		{
			if(i==n-1)
			{
				cout<<a[n-1]<<endl;
				break;
			}
			if(a[i]==a[i+1]){
				i++;
				continue;
			}
			else 
			{
				cout<<a[i]<<endl;
				break;
			}
		}

	}
	return 0;
}