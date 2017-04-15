#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	long int t;
	cin>>t;
	while(t--){

		long long int n ;
		cin>>n;
		int a[100000];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for (int i = 0; i < n; ++i)
		{
			if(a[i]==a[i+1])
				i++;
			else cout<<a[i]<<endl;
		}

	}
	return 0;
}