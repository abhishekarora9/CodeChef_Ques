#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int a,b;
		cin>>a>>b;
		a=a*a;
		b=b*b;
		float ans1,ans2;
		ans1=abs(b-a);
		ans2=abs(a+b);
		ans1=sqrt(ans1);
		ans2=sqrt(ans2);
		printf("%f",ans1);
		printf(" ");
		printf("%f\n",ans2);


	}

	return 0;
}