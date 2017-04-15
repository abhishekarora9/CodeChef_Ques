#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		int a[1000][1000];
		long long int n ,m;
		cin>>n>>m;
		if(n==1&&m==1)
		cout<<"0"<<endl;
	else
		cout<<(m-1)+(1+2*(m-1))*(n-1)<<endl;

	}
	return 0;
}