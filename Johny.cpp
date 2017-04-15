#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){

		long long int n ,k;
		cin>>n;
		int arr[100000];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];

		}
		cin>>k;
		long long int temp;
		temp=arr[k-1];
		sort(arr,arr+n);
		for (int i = 0; i < n; ++i)
		{
			if(arr[i]==temp){
				cout<<++i<<endl;
				break;
			}
		}



	}

	return 0;
}