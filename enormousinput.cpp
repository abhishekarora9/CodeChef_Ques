#include <iostream>
using namespace std;
int main(){
	long long int count,n , k,temp;
	count=0;
	cin>>n>>k;

	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		if(temp%k==0)
			count++;

		
	}
	cout<<count<<endl;

	return 0;
}