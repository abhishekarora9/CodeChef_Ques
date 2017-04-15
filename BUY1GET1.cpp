#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main (){
	long long int t;
	cin>>t;
	cin.get();
	while(t--){
		char a[100000] ;

		
		long long int cost=0, count=0,temp;

		char temp1=cin.get();
		for
		long long int n=0;

		for (int i = 0; a[i] !='\0'; ++i)
		{
			n++;
		}
		
		sort(a,a+n);
		
		for (int i = 0; i < n; ++i)
		{
			if(a[i]==a[i+1]){
				cost++;
				i++;
			}else
			{
				cost++;
			}

		}

		cout<<cost<<endl;







	}

	return 0;

}

