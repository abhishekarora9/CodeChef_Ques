#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		string s , r;
		cin>>s;
		int a[100000];
		
long long int count1=0,count2=0;
		for (long long int i = 0; i < s.length(); ++i)
		{
			if(s[i]=='a')
				count1++;
			if(s[i]=='b')
				count2++;
			
		}
		cout<<min(count1,count2)<<endl;
	}
	return 0;
}