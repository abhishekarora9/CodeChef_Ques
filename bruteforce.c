#include <iostream>
using namespace std;
int main ()
{
	long long int n;
	double balance;
	cin>>n>>>balance;
	if(n%5==0){
	if((balance-n-0.5)<0)
		cout<<balance<<endl;
	else
		cout<<balance-n-0.5<endl;
}
else cout<<balance<<endl;

	return 0;

}