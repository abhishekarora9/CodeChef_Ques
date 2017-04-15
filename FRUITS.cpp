#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n,m,k;
		cin>>n>>m>>k;
		if(abs(n-m)>=k)
		cout<<abs(abs(n-m)-k)<<endl;
	else {
		k=k-abs(n-m);
		if(k%2==0)
			cout<<"0"<<endl;
		else 
			cout<<"1"<<endl;
	}
	}
	return 0;
}