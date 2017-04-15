#include <iostream>
using namespace std;
int main ()
{
	long long int t ;
	cin>>t;
	while(t--){

		long long int n;
		cin>>n;
		long long int count=0;
		int arr[1000000];
		long long int temp;
		temp=99999999999;

		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if (arr[i]<=temp)
			{
				temp=arr[i];
				count++;
			}
		}
		cout<<count<<endl;

		


	}


	return 0;
}