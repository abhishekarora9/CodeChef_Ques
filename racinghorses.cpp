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
			int arr[100000];
			for (int i = 0; i < n; ++i)
			{
				cin>>arr[i];
			}
			long long int temp=9999999999;
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n&& j!=i; ++j)
				{

					if(abs(arr[i]-arr[j])<temp)
						temp=abs(arr[i]-arr[j]);
				}

			}
			if(n>1)

			cout<<temp<<endl;
		


	}


	return 0;
}