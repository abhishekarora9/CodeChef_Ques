#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n ;
		cin>>n;
		int a[100000];
		long long int maxarea=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long int l =0;
		long long int count=0;
		for (int i = n-1; i >=0; --i)
		{
			if(a[i]==a[i-1]&&count<2){
				if(count==0){
					l=a[i];
					count++;
					i--;
					continue;
				}
				if(count==1){
					maxarea=a[i]*l;
					count++;
					i--;
					break;
				}
			}
		}
		if(maxarea>=1)
		cout<<maxarea<<endl;
	else cout<<"-1"<<endl;


	}
	return 0;
}