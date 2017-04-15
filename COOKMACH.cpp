#include <iostream>
#include <algorithm>
using namespace std;
int bitwise(long long int a,long long int b){
	long long int c= a^b;
	long long int car=1;
	while(c%2!=1)
		c=c/2;
	c=c/2;
	for (int i = 0; c!=0; ++i)
	{
		if(c%2==1){
			break;
		}
		car++;
		c=c/2;
	}
	return car;

}


int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int a ,b,temp,count=0;
		cin>>a>>b;
		if(a==b){
			cout<<"0"<<endl;
			continue;
		}
		if(a<b){
			if(a%2==1&&a!=1){
				a--;
				count=count+2;
			}

			cout<<count+bitwise(a,b)<<endl;

		}
		else {
			if(a%2==1&&a!=1){
				a--;
				count=count+2;
			}

			cout<<count+bitwise(a,b)<<endl;
		}


	}
	return 0;
}