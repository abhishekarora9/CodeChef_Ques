#include <iostream>
using namespace std;
int main ()

{
	long long int t;
	cin>>t;
	while(t--){
		long long int n,a,b;
		long long int count1 =0;
		cin>>n;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin>>a;
				if(a==1)
					count1++;
			}
		}
		if((count1-n)>=0)
				count1=count1-n;
			n--;


		long long int totalno=0;
		totalno=n*n;
		long long int k=0;
		while(count1!=0){
			if((count1-2*n)>=0){
				count1=count1-2*n;
				k++;
				n--;
			}
			else if(count1<=2*n)
			{
				k++;
				break;
			}


			


		}
		cout<<k<<endl;


	}

	return 0;
}