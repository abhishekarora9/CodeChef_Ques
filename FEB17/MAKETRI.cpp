#include <iostream>
using namespace std;
int main ()
{
	long long int n , l , r;
	cin>>n>>l>>r;
	int a[1000000];
	for (int i = 1; i <= n; ++i)
	{
		cin>>a[i];
	}
	long long int count=0;
	for (long long int i = l; i <=r; ++i)
	{
		for (long long int j = 1; j <=n&&i<=r; ++j)
		{
			for (long long int k = 1; k <= n&&i<=r&&j<=n; ++k)
			{
				if(i!=j&&i!=k&&j!=k){
					if(a[j]+a[k]>a[i]&&a[i]+a[j]>a[k]&&a[i]+a[k]>a[j]){
						count++;
						//cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<endl;
						i++;
						j=1;
						k=1;
						break;
					}
					
				}
			}
		}
		

	}
	cout<<count<<endl;

	return 0;
}