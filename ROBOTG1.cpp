#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int m=0,n=0;
		cin>>n>>m;
		string s;
		cin>>s;
		int a[100][100];
		int current_pos_row=0;
		int current_pos_col=0;
		int flag=0;
		int flag2=0;
		for (int i = 0; i < n&&flag2==0; ++i)
		{
			for (int j = 0; j < m&&flag2==0; ++j)
			{
				current_pos_row=i;
				current_pos_col=j;
				flag=0;
				for (int k = 0; k < s.length()&&flag2==0; ++k)
				{
					if(s[k]=='L')
						current_pos_col-=1;
					if(current_pos_col<0||current_pos_col>=m)
						flag=1;
					if(s[k]=='R')
						current_pos_col+=1;
					if(current_pos_col<0||current_pos_col>=m)
						flag=1;
					if(s[k]=='U')
						current_pos_row-=1;
					if(current_pos_row<0||current_pos_row>=n)
						flag=1;
					if(s[k]=='D')
						current_pos_row+=1;
					if(current_pos_row<0||current_pos_row>=n)
						flag=1;

					if(flag==1)
						break;
					if(k==s.length()-1){
						cout<<"safe"<<endl;
						flag2=1;
					}

					
					
				}
			}
		}
		if(flag2==0)
			cout<<"unsafe"<<endl;


	}

	return 0;
}