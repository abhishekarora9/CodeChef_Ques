#include <iostream>
#include <algorithm>
using namespace std;
int main ()

{
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		int flag=0;

		int arr[100000];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if(i!=0&& abs(arr[i]-arr[i-1])<=1)
				continue;
			else flag=1;

		}
		if(flag==1)
		sort(arr,arr+n);
	flag=0;
	for (int i = 1; i < n; ++i)
	{
		if(abs(arr[i]-arr[i-1])<=1)
			continue;
		else flag=1;

	}
	if(flag==1){
		cout<<"NO"<<endl;

	}
	else cout<<"YES"<<endl;




	}

	return 0;
}