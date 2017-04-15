#include <iostream>
using namespace std;
int main ()
{
	int n ;
	int arr[100000];
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	long long int maxsize;
	long long int count =0;

	for (int i = 0; i < n; ++i)
	{
		if(arr[i]!=0){
			count++;
			if(count>maxsize)
				maxsize=count;
		}
		else 
			count=0;

	}
	cout<<maxsize<<endl;

	return 0;
}