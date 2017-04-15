#include <iostream>
using namespace std;
int main (){
	long long int t;
	cin>>t;
	while(t--){
		long long int n ;
		cin>>n;
		int a[100000];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];

		}
		long long int notes=0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i])
			{
				notes=notes+a[i]/100;
				a[i]=a[i]%100;
				
			}
			if(a[i])
			{
				notes=notes+a[i]/50;
				a[i]=a[i]%50;
			}
			if(a[i])
			{
				notes=notes+a[i]/20;
				a[i]=a[i]%20;
			}
			if(a[i])
			{
				notes=notes+a[i]/10;
				a[i]=a[i]%10;
			}
			if(a[i])
			{
				notes=notes+a[i]/5;
				a[i]=a[i]%5;
			}
			if(a[i])
			{
				notes=notes+a[i]/3;
				a[i]=a[i]%3;
			}
			if(a[i])
			{
				notes=notes+a[i]/2;
				a[i]=a[i]%2;
			}
			if(a[i])
			{
				notes=notes+a[i]/1;
				a[i]=a[i]%1;
			}
			
		}
		cout<<notes<<endl;

		
	}



	return 0;
}