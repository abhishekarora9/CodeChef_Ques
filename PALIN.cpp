#include <iostream>
#include <cstring>
using namespace std;
bool isPalin(char n[],int flag,int finalChar){
	
	int startchar=0;
	if(flag==0){
		while(startchar<=finalChar){
			if (n[startchar]==n[finalChar])
			{
				startchar++;
				finalChar--;
			}
			else return false;
		}
	}
	else {
		n[startchar]=0;
		if(n[finalChar]==1){
			finalChar--;
			while(startchar<=finalChar){
				if (n[startchar]==n[finalChar])
			{
				startchar++;
				finalChar--;
			}
			else return false;
			}
		}
		else return false;
	}
	return true;
}
int setArr(char n[],int i){
	if(i==0)
		return 1;
	else {
		if(n[i]==9){
		n[i]=0;
		n[i-1]=n[i-1]+1;
	}
	else n[i]++;
	}

	return 2;
}

int main ()
{

	long long int t;
	cin>>t;
	cin.get();
	int flag=0;
	while(t--){
		char n[100000];

		
		gets(n);
		int i=0;
		int finalChar;
		for ( i = 0; i>=0; ++i)
		{
			if (n[i]=='\0')
			{
				finalChar=i;
				break;
			}
		}
		
		

		for (long long int j =1; j > 0; ++j)
		{
			i=finalChar;
			flag=0;
			if(n[finalChar]==9){
			while(n[i]!=9){
					if(setArr(n,i)==1)
					{
						flag=1;
						break;
					}
					i--;
				}

			}
			else {
				setArr(n,i);

			}

			if(isPalin(n,flag,finalChar)){
				if(flag==1)
				{
					cout<<"1";
					puts(n);
				}
				else
				puts(n);
				break;
			}
			
		}
		cout<<n[finalChar]<<endl;
		
		

	}
}