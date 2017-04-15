#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n ,m,k;
		cin>>n>>m>>k;
		int ignored[10000],trcked[100000];
		long long int temp=0;
		std::memset(ignored,0,sizeof ignored);
		std::memset(trcked,0,sizeof trcked);
		for (int i = 0; i < m; ++i)
		{
			cin>>temp;
			ignored[temp]=1;
		}
		for (int i = 0; i < k; ++i)
		{
			cin>>temp;
			trcked[temp]=1;
		}
		long long int count1=0,count2=0;
		for (int i = 1; i <= n; ++i)
		{
			if(ignored[i]==1&&trcked[i]==1)
				count1++;
			if(ignored[i]==0&&trcked[i]==0)
				count2++;
		}
		cout<<count1<<" "<<count2<<endl;

	}

	return 0;
}