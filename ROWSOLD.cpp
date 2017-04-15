#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		

		long long int i=0;
		long long int onecount=0,zerocount=0;
		long long int totalcost=0;
		while(s[i]!='1'&&i<s.length())
			i++;


		for (; i < s.length(); )
		{
			if (s[i]=='1'&&i<s.length())
			{
				onecount++;
				i++;
				while(s[i]=='1'&&i<s.length())
				{
					onecount++;
					i++;
				}

				
			}
			if(i>=s.length())
				break;
			if(s[i]=='0'&&i<s.length())
			{
				zerocount++;
				i++;
				while(s[i]=='0'&&i<s.length())
				{
					zerocount++;
					i++;

				}
			}
			totalcost=totalcost+(zerocount)*onecount+onecount;
			zerocount=0;


		}
		cout<<totalcost<<endl;
		




	}
	return 0;

}