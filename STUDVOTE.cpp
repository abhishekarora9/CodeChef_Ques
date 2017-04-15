#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n,k,temp;
		cin>>n>>k;
		int a[100000];
		memset(a, 0, sizeof a);
		for (long long int i = 0; i < n; ++i)
		{
			cin>>temp;
			if(i+1==temp){
				a[temp]=-1;
			}
			if(a[temp]!=-1){
				a[temp]++;

			}
			

			
		}
		long long int totalcount=0;
		

		for (int i = 1; i <= n; ++i)
		{
			if(a[i]>=k&&a[i]!=-1)
				totalcount++;
		}
		cout<<totalcount<<endl;
	}
	return 0;
}