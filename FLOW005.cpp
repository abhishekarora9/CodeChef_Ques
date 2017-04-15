#include <iostream>
using namespace std;
int main ()
{
	long long int t ;
	cin>>t;
	while(t--){
		long long int count=0, n ;
		cin>>n;
		if(n/100!=0){
			count=count+n/100;
			n=n%100;
		}
		if(n/50!=0){
			count=count+n/50;
			n=n%50;
		}
		if(n/10!=0){
			count=count+n/10;
			n=n%10;
		}
		if(n/5!=0){
			count=count+n/5;
			n=n%5;
		}
		if(n/2!=0){
			count=count+n/2;
			n=n%2;
		}
		if(n/1!=0){
			count=count+n/1;
			n=n%1;
		}

		cout<<count<<endl;


	}
	return 0;
}