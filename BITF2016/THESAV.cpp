#include <iostream>
#include <string.h>
using namespace std;
int main ()

{
	int t;
	cin>>t;
	cin.get();
	while(t--){
		
		char a[100000];
		bool b[100000];
		
		char temp;
		long long int k=0;
		temp=cin.get();
		while(temp!='\n'){
			a[k]=temp;
			if(temp=='*')
				b[k]=1;
			k++;
			temp=cin.get();

		}
		int flag=0;
		




		for (int i = 0; i < k; ++i)
		{
			if(a[i]=='*')
			 {int count=1;
				
					while(count!=3){
						if(a[i+count]=='0'){
							b[i+count]=1;
							count++;
						}
					}

						
				
			}
		}
		
		for (int i = 0; i < k; ++i)
		{
			if(b[i]==0){
				cout<<"NO"<<endl;
				flag=1;}
		}
		if(flag==0)
			cout<<"YES"<<endl;



	}

	return 0;
}