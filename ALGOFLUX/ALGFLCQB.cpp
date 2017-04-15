#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	cin.get();
	while(t--){
		char a[1000000];
		
		long long int n ;
		for (long long int i = 0; i < 1000000; ++i)
		{
			a[i]=cin.get();
			if(a[i]=='\n')
			{
				n=i;
				break;
			}
		}
		
		while(a[n]!='\n')
			n++;
		
		long long int count;
		long long int maxcount;
		for (long long int i = 0; i < n; ++i)
		{
			count=0;
			if(a[i]=='1'){
				while(a[i]=='1'){
					i++;
					count++;
				}

			}
			if(count>maxcount)
				maxcount=count;
		}

cout<<maxcount<<endl;
	}
	return 0;
}