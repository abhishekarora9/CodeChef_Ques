#include <iostream>
using namespace std;
class subpart{
public:

	long long int single_prev;
	long long int single_current;
	long long int single_next;

	long long int double_prev;
	long long int double_current;
	long long int special_sum1;
	long long int special_sum2;
	
	long long int all_one;
	long long int special_sum3;
	long long int special_sum4;
};

int main (){

	int t;
	int c[10][10];
	cin >>t;
	while(t--)
	{

		long long int n;
		cin >>n;
		int a[1000000],b[1000000];
		
		for (int i = 0; i < n; ++i)
		{
			cin >>b[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin >>a[i];
		}

		for (int i = 0; i < n; ++i)
		{
			subpart si;
			b[n+1]=0;
			b[-1]=0;
			b[n]=0;
			
				
			
			if(i-1>=0&&i-1<=n)
			c[i][0]=b[i-1]+a[i];
			c[i][1]=a[i]+b[i];
			if(i+1>=0&&i-1<=n)
			c[i][2]=a[i]+b[i+1];
		c[i][3]=a[i]+b[i]+b[i-1]+b[i+1];
		c[i][4]=a[i]+b[i-1]+b[i];
		c[i][5]=a[i]+b[i]+b[i+1];
		c[i][6]=a[i];
		




		//cout <<"S"<<i<<'\t'<<si.single_prev<<'\t'<<si.single_current<<'\t'<<si.single_next<<'\t'<<si.double_prev<<'\t'<<si.double_current<<'\t'<<si.all_one <<'\t'<<a[i]<< endl;
		
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < 7; ++j)
			{
				cout<<c[i][j]<<'\t';
			}
			cout <<endl;
		}
		cout <<endl;
		/*long long int temp=0;

		long long int temp1=0;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < 7; ++j)
			{
				for (int k = 0; k < n; ++k)
				{temp=0;
					for (int l = 0; l < 7; ++l)
					{
						if(i!=k){
							if (c[i][j]==c[k][l])
							{
								temp=1;
								break;
							}


						}
					}
					if(temp!=1){
						cout<<"-1"<<endl;
						break;
					}
					//else continue;


				}
			}
		}
		


	}
	*/
		


	return 0;
}