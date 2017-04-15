#include <iostream>
#include <cmath>
using namespace std;
long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
int main ()
{
	long long int t;
	cin>>t;
	while(t--){

		long long int a[100000],n,k;
		cin>>n>>k;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		long long int calc_power,count=0,temp,temp2;
		calc_power=pow(2,n);
		for (int i = 0; i < calc_power; ++i)
		{
			temp=convertDecimalToBinary(i);
			temp2=0;
			
			for (int j = 0; j < n; ++j)
			{
				if(temp%10==0)
					temp=temp/10;
				else{
					temp2=temp2|a[j];
					temp=temp/10;
					

				}
			}
			if (temp2>=k)
			{
				count++;
			}
		}
		if(count>0)
		cout<<count-1<<endl;
	else cout<<count<<endl;


	}
}