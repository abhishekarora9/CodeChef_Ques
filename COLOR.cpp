#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		string s ;
		cin>>s;
		long long int rcount=0,bcount=0,gcount=0;
		long long int totalcount=0;

		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='G')
				gcount++;
			if(s[i]=='R')
				rcount++;
			if(s[i]=='B')
				bcount++;



		}

		totalcount=rcount+bcount+gcount;
		totalcount=totalcount-max(max(gcount,rcount),max(gcount,bcount));
		cout<<totalcount<<endl;
	}
	return 0;
}