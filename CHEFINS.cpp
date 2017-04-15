#include <iostream>
#include <cmath>
using namespace std ;
int lcm(int a,int b){
  
    int temp = a;

    while(1){
         if(temp % b == 0 && temp % a == 0)
             break;
         temp++;
    }

   return temp;
}
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
	long long int n,k,q;
	long long int p=0;
	cin>>n>>k>>q;
	int a[100000],b[100000],c[100000];
	for (int i = 0; i < k; ++i)
	{
		cin>>a[i];
		if(a[i]>n||a[i]<1)
			a[i]=1;
	}

	long long int calc_power,count=0,temp,temp2=1,temp3=0;
		calc_power=pow(2,k);
		for (int i = 1; i < calc_power; ++i)
		{
			temp=convertDecimalToBinary(i);
			temp2=1;
			temp3=0;
			for (int j = 0; j < k; ++j)
			{
				if(temp%10==0)
					temp=temp/10;
				else{
					temp2=lcm(temp2,a[j]);
					temp3=temp3+a[j];

					temp=temp/10;
					

				}
			}
			b[i]=temp2;
			c[i]=temp3;
			
		
		}
		int flag1=0;
		
			
	for (int i = 0; i < q; ++i)
	{
		flag1=0;
		long long int query;
		cin>>query;
		
		for (int j = 1; j < calc_power; ++j)
		{
			if(query%b[j]==0||query%c[j]==0){
				cout<<"Yes"<<endl;
				flag1=1;
				break;
			}
		
		

		
		


		}
		if(flag1==0||query<1)
			cout<<"No"<<endl;

	}
	return 0;
}