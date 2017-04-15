#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[100000]={0};
		long long int totalsum=0;
		for (int i = 0; i < s.length(); ++i)
		{
			a[s[i]-'a']++;
		}
		int flag=0;
		for (int i = 0; i < 26; ++i)
		{
			totalsum=totalsum+a[i];

		}
		//cout<<totalsum<<endl;

		for (int i = 0; i < 26; ++i)
		{
			if (totalsum-a[i]==a[i]){
		
			cout<<"YES"<<endl;
			flag=1;
			break;
		}

			
		
		
		}
		if (flag==0)
		{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}