#include <iostream>
using namespace std;
int main (){
	long long int m , n;
	cin>>n>>m;
	int arr[100000];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int *start,*end;
	start=arr;
	end=*arr[n-1];
	long long int power=1;
	for (int i = 0; i < n; ++i)
	{
		power=power*2;
	}

	int casearr[power]={0};
	for (int i = 0; i < power; ++i)
	{
		int temp;
		temp=i;
		int y=power-1;
		while(temp!=0){
		casearr[y]=temp%2;
		temp=temp/2;
		y--;
		}

		for (int k = 0; k < power; ++k)
		{
			if(casearr[k]=0)
		}


	}


	return 0;
}