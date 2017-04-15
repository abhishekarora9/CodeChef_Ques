#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n,k,count=0,totalamount=0;
		int a[1000000];
		int b[1000000];
		cin>>n>>k;


		for (int i = 0; i < n; ++i)
		{
			cin>>a[i]>>b[i];
		}
		for (int i = 0; i < n; ++i)
		{
			
			count+=a[i];
			if(count>k)
			{
				totalamount=totalamount+(count-k)*b[i];
				for (int j = i+1; j < n; ++j)
				{
					totalamount=totalamount+a[j]*b[j];
				}
				break;

			}


		}
		cout<<totalamount<<endl;
	}
	return 0;

}