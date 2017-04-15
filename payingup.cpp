#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{
	long long int t;
	long long int n, sum;
	cin>>t;
	while(t--){

		cin>>n>>sum;
		int arr[100000];
		for (int i = 0; i <n; ++i)
		{
			cin>>arr[i];
			if(arr[i]>sum){
				i--;
				n--;

			}
		}

		long long int a=1;
		for (int i = 0; i < n; ++i)
		{
			a=a*2;
		}
		long long int temp;
		bool result=false;

		
		int temp1;

		for (int i = 0; i < a; ++i)
		{
			temp1=i;
			int binary[100000]={0};
			
			int j;
			j=n-1;
			while(temp1!=0){
				binary[j]=temp1%2;
				temp1=temp1/2;
				j--;

			}temp=0;
			for (int k = 0; k < n; ++k)
			{
				if(binary[k]==1)
					temp=temp+arr[k];
			}
			if(temp==sum){
				result=true;
				break;
			}
				

			}
			if (result)
				cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}



	return 0;

}