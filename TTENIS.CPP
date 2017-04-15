#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long int count1=0,count2=0;
		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i]=='0')
				count1++;
			else
				count2++;
		}
		if(count2>count1)
			cout<<"WIN"<<endl;
		else
			cout<<"LOSE"<<endl;
	}
	return 0;
}