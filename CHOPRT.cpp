#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int a,b;
		cin>>a>>b;
		if(a<b)
			cout<<"<"<<endl;
		if(a>b)
			cout<<">"<<endl;
		if(a==b)
			cout<<"="<<endl;
	}
	return 0;

}