#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		bool arr[1000000];

		long long int a;
		cin>>a;
		for (int i = 0; i < a; ++i)
		{
			long long int d , n , q;
			cin>>d>>n>>q;
			if(n%2==0)
				cout<<n/2<<endl;
			else{

				if(q==1){

					if(d==1){
						cout<<n/2<<endl;
					}
					else cout<<n/2+1<<endl;
				}
				else{
					if(d==1){
						cout<<n/2+1<<endl;
					}
					else cout<<n/2<<endl;
				}
			}
			

			



		}
	}
	return 0;
}