#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		int a[100000][2];
		int b[100000][3];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i][0]>>a[i][1];
		}
		long long int m ;
		cin>>m;
		for (int i = 0; i < m; ++i)
		{
			cin>>b[i][0]>>b[i][1];
			b[i][2]=b[i][0]/b[i][1];
			
		}
		long long int cost=0;
		int temp1,temp2,temp3,temp4=999999,temp5,temp6;
		for (int i = 0; i < n-1; i++)
		{
			
			
				temp6=(a[i][0]-a[i+1][0])*(a[i][0]-a[i+1][0])+(a[i][1]-a[i+1][1])*(a[i][1]-a[i+1][1]);
				temp1=sqrt(temp1);
				if(temp1*temp1!=temp6)
					temp1++;

				
			
			temp2=9999;
			//cout<<temp1<<endl;

		for (int j = 0; j < m; ++j)
		{
			if(b[j][0]>=temp1&&b[j][0]<temp2){
				

				temp2=b[j][0];
				temp3=j;
			
			}
			if(b[j][2]<temp4)
			{
				temp4=b[j][2];
				temp5=j;
			}
		}
		temp4=b[temp5][0];
		for (long long int  k= 1; k < 100000; ++k)
		{
			if(temp1<=temp4){
				temp4=k;


				break;
			}
			else
				temp4=temp4+b[temp5][0];
		}
		//cout<<temp3<<endl;
		cost=cost+min(b[temp3][1],temp4*b[temp5][1]);
		}


				temp6=(a[n-1][0]-a[0][0])*(a[n-1][0]-a[0][0])+(a[n-1][1]-a[0][1])*(a[n-1][1]-a[0][1]);
				temp1=sqrt(temp6);
				if(temp1*temp1!=temp6)
					temp1++;

				
			temp2=99999;
			//cout<<temp1<<endl;

		for (int j = 0; j < m; ++j)
		{
			if(b[j][0]>=temp1&&b[j][0]<temp2){
				

				temp2=b[j][0];
				temp3=j;
			
			}
			if(b[j][2]<temp4)
			{
				temp4=b[j][2];
				temp5=j;
			}
		}
		temp4=b[temp5][0];
		for (long long int  k= 1; k < 100000; ++k)
		{
			if(temp1<=temp4){
				temp4=k;


				break;
			}
			else
				temp4=temp4+b[temp5][0];
		}
		//cout<<temp3<<endl;
		cost=cost+min(b[temp3][1],temp4*b[temp5][1]);


cout<<cost<<endl;



	}
	return 0;
}