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
		std::memset(a,0,sizeof a);
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int b[100000];
		std::memset(b,0,sizeof a);
		long long int totalcount=n;
		for (int i = 0; i < n; ++i)
		{
			if(b[a[i]]==0){
				b[a[i]]=1;
				continue;
			}
			else{
				totalcount--;
				continue;
			}
		}
		cout<<totalcount<<endl;
	}

	return 0;
}