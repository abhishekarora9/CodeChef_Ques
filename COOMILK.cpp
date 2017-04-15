#include <iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n ;
		cin>>n;
		string s;
		long long int flag=0;
		for (long long int i = 0; i < n; ++i)
		{
			cin>>s;
			if(i==n-1&&s=="cookie")
				flag=1;
			if(s=="cookie"&&flag==0&&i+1<n)
			{
				cin>>s;
				if(s=="milk")
				{
					i++;
					continue;
				}
				else {
					flag=1;
					i++;
					
				}

			}

			
		}
		if(flag==1)
			cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;

}