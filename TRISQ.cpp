#include <iostream>
using namespace std;
double squares(long long int b){
	if(b/2<2)
		return 0;
	if(b/2==2)
		return 1;
	long long int a,c;
	a=b/2;
	c=a/2;


	return c*c+2*squares(a);


}
int main ()
{
	long long int t;
	cin>>t;
	while(t--){

		long long int b ;
		cin>>b;
		cout<<squares(b)<<endl;
	}
	return 0;
}