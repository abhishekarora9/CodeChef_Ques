#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int a ,b;
		cin>>a>>b;
		if(a==1){
			if(b==3||b==2)
				cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
			continue;

		}
		if(b==a){
			if(b==1||b==4)
				cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
			continue;
		}
		if(a%2==1){
			if(b==a-2||b==a+1||b==a+2)
				cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
				continue;
			
		}
		if(a%2==0){
			if(b==a-2||b==a-1||b==a+2)
				cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
				continue;
			
		}
		cout<<"NO"<<endl;
	}
	return 0;
}