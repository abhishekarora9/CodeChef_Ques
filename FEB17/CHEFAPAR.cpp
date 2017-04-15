#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){

		long long int n,temp ;
		int a[100000];
		cin>>n;
		temp=n;
		for (int i = 1; i <= n; ++i)
		{
			cin>>a[i];
		}
		int flag=0;
		long long int multiplier=n,late_fees=0;
		for (int i = 1; i <= n; ++i)
		{
			if(a[i]==1)
				multiplier--;
			if(a[i]==0&&flag==0){
				flag=1;
				temp=i;


			}
			
		}
		if(flag==0)
		cout<<multiplier*1000+100*(n-temp)<<endl;
	else {
		cout<<multiplier*1000+100*(n-temp+1)<<endl;
	}


	}
	return 0;
}