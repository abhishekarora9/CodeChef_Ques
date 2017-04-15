#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		long long int mindiff=0,maxdiff=a.length();
		for (long long int i = 0; i < a.length(); ++i)
		{
			if(a[i]!=b[i]&&a[i]!='?'&&b[i]!='?'){
				
				mindiff++;
			}
			if(a[i]==b[i]&&a[i]!='?'&&b[i]!='?'){
				maxdiff--;
			}
		}
		cout<<mindiff<<" "<<maxdiff<<endl;
	}
	return 0;
}