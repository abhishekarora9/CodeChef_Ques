#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){

		long long int n;
		cin>>n;
		int a[100000];
		int flag=0;
		long long int swaps=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if(abs(i-(a[i]-1))>2){
				
				flag=1;
				
			}
			 swaps=swaps+abs(i-(a[i]-1));
			 
		}
		if(flag==0)
			{
				if(swaps%2!=0){
					swaps=swaps/2;
					swaps++;
				}
				else swaps=swaps/2;
				cout<<swaps<<endl;
			}
		else cout<<"Not Allowed"<<endl;
		


	}

	return 0;
}