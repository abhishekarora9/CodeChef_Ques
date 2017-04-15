#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main ()
{
	long long int T;
	cin>>T;
	while(T--){
		long long int  n;
		double b;
		cin>>n>>b;
		int a[100000];
		for (long long int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		double total_count=0;
		for (long long int i = b; i < n-b; ++i)
		{
			total_count=total_count+a[i];

			
		}
		b=n-2*b;
		b=total_count/b;
		printf("%.6f\n", b);

	}
	return 0;
}