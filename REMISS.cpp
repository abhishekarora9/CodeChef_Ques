#include <iostream>
using namespace std;
int main (){
	long long int t;
	cin>>t;
	while(t--){
		long long int a ,b;
		cin>>a>>b;
		cout<<max(a,b)<<" "<<a+b<<endl;
	}
	return 0;
}