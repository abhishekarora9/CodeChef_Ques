#include <iostream>
#include <string>
using namespace std;
int main ()
{
	long long int t ;
	string s ;
	cin>>s;
	int a[1000];
	for (int i = 0; i < s.length(); ++i)
	{
		a[s[i]-'a']=1;
		
	}
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>s;
		for (int j = 0; j < s.length(); ++j)
		{
			if(a[s[j]-'a']==1){

if(j==s.length()-1)
cout<<"Yes"<<endl;				continue;
}
			else{
				cout<<"No"<<endl;
				break;
			}
			//cout<<"Yes"<<endl;
		}

	}

	return 0;
}