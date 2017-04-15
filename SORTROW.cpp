#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	long long int n;
	cin>>n;
	int a[300][300];
	for (long long int i = 0; i < n; ++i)
	{
		for (long long int j = 0; j < n; ++j)
		{
			cin>>a[i][j];
		}
		sort(a[i],a[i]+n);
	}
	for (long long int i = 0; i < n; ++i)
	{
		for (long long int j = 0; j < n; ++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
		
	}





	
	return 0;

}