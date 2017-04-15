#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		int a[1000][1000];
		long long int n ,m;
		cin>>n>>m;
		long long int tot_Coll=0;
		string s;

		for (int i = 0; i < n; ++i)
		{
			cin>>s;
			for (int j = 0; j < m; ++j)
			{

				a[i][j]=s[j]-'0';
			}
		}
		for (int i = 0; i < m; ++i)
		{
			a[n][i]=0;
		}
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if(a[j][i]==1)
					a[n][i]++;

				
			}
		}
		int c[11];
		c[0]=0;
		c[1]=0;
		c[2]=1;
		c[3]=3;
		c[4]=6;
		c[5]=10;
		c[6]=15;
		c[7]=21;
		c[8]=28;
		c[9]=36;
		c[10]=45;
		for (int i = 0; i < m; ++i)
		{
			tot_Coll+=c[a[n][i]];
			//cout<<c[a[n][i]]<<" ";
		}
		//cout<<endl;
		cout<<tot_Coll<<endl;

	}
	return 0;
}