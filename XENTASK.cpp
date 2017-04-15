#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n ;
		cin>>n;
		int a[100000];
		for (long long int i = 1; i <= n; ++i)
		{
			cin>>a[i];
		}
		int b[100000];
		for (int i = 1; i <= n; ++i)
		{
			cin>>b[i];
		}
		long long int ans1=0,ans2=0;
		for (long long int i = 1; i <= n; ++i)
		{
			if(i%2==0)
			{
				ans1=ans1+b[i];
				ans2=ans2+a[i];
			}
			else {
				ans2=ans2+b[i];
				ans1=ans1+a[i];
			}
		}
		if(ans1<ans2)
			cout<<ans1<<endl;
		else cout<<ans2<<endl;

	}
	return 0;
}