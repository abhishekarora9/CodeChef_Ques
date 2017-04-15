#include <iostream>

#include <cmath>
using namespace std;
int convertback(int a[],long long int n){
	long long int multiplier=2;
	long long int j=n-1;
	long long int sum=0;
	for (int i = 0; i < n; ++i)
	{
		sum=sum+pow(2,j)*a[i];
		j--;
	}
	return sum;

}
int countreturn(long long int n){
	long long int count=0;
	while(n!=0){
	if(n%2==1){
		count++;
		n=n/2;

	}
	else 
		n=n/2;
}
return count;
}
int main ()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,a,b;
		long long int a_count0,b_count0;
		cin>>n>>a>>b;
		long long int final1=0;
		int f[100000]={0};
		long long int a_count1=countreturn(a);
		long long int b_count1=countreturn(b);
		a_count0=n-a_count1;
		b_count0=n-b_count1;
		if(a_count1>=b_count0)
			final1=b_count0;
		if(a_count1<b_count0)
			final1=a_count1;
		if(b_count1>=a_count0)
			final1=final1+a_count0;
		if(b_count1<a_count0)
			final1=final1+b_count1;
		long long int final0=n-final1;
		
		for (int i = 0; i < final1; ++i)
		{
			f[i]=1;
		}
		cout<<convertback(f,n)<<endl;


	}
	
	return 0;
}