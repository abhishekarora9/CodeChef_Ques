#include <iostream>
#include <cstring>
using namespace std;
int main (){
	long long int t;
	cin>>t;
	while(t--){
long long int i;

		string s;
		cin>>s;
		i=s.length()-1;
		while(s[i]=='0')
			i--;
		
		
		for (i=i;i>=0; i--)
		{
			cout<<s[i];
		}
		cout<<endl;
		
	}
	return 0;
}
