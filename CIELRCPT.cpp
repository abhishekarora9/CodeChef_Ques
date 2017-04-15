#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int  n ;
		cin>>n;
		long long int totalcount=0;
		long long int power=0;
		for (int i = 11; n!=0;i--)
		{ power=pow(2,i);
			if(n/power!=0){
				totalcount=totalcount+n/power;
				n=n%power;
			}
		}
		cout<<totalcount<<endl;
	}
	return 0;

}