#include <iostream>
using namespace std;
int main (){
	long long int t;
	cin>>t;
	while(t--){
		long long int n ;
		cin>>n;
		int a[100000];
		int b[100000];
		long long int count=0,remaining=0;
		for (int i = 1; i <= n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 1; i <= n; ++i)
		{
			cin>>b[i];
			if(b[i]<=a[i]-a[i-1]){
				
				count++;

			}

		}
		cout<<count<<endl;
	}
	return 0;
}