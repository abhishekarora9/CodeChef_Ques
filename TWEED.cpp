#include <iostream>
#include <string>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n,sum=0;
		cin>>n;
		//cin.get();
		string a;
		cin>>a;
		int a1[100000];
		for (int i = 0; i < n; ++i)
		{
			cin>>a1[i];
			sum=sum+a1[i];
		}
		int player;
		if(a=="Dee")
			player=0;
		else player=1;
		//cout<<player<<endl;
		int winner=1;
		if(n==1&&a1[0]%2==0&&player==0)
			winner=0;
		else winner=1;

if(winner==0)
	cout<<"Dee"<<endl;
else cout<<"Dum"<<endl;
	}
	return 0;
}
