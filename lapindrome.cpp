#include <iostream>
#include <cstring>
#include <algorithm>
#include <fstream>

using namespace std;
int main ()

{
	long long int t;
	
	cin>>t;
	while(t--){
		long long int temp=0;

	   char str[100000]={'\0'};
	   long long int i=0;
	   char x = 0;
	   cin.get();
	   
	   while(x!='\n'){
	   	x = cin.get();
	   	str[i]=x;
	   	i++;


	   }
	   str[i-1]='\0';
	   temp=i-2;
	   //cout<<i-1<<endl;

	   //cout<<str[i];
     
    
	   char *ptr_start=NULL;
	   char *ptr_end=NULL;
	   ptr_start=str;
	   ptr_end=str;

	   
	   if((i-1)%2==0)
	   {
	   	for (int j = 0; j < (i-1)/2; ++j)
	   	{
	   		ptr_end++;
	   	}
	   }
	   else{
	   	for (int j = 0; j < ((i-1)/2+1); ++j)
	   	{
	   		ptr_end++;
	   	}
	   }
	   //cout<<*ptr_start<<endl<<*ptr_end<<endl;
	   char a[1000000]={'\0'},b[1000000]={'\0'};
	   long long int count=0;
	   while(*ptr_end!='\0'){
	   	a[count]=*ptr_start;
	   	b[count]=*ptr_end;
	   	ptr_start++;
	   	ptr_end++;
	   	count++;


	   }

	   sort(a,a+temp-2);
	   sort(b,b+temp-2);
	   puts(a);
	   puts(b);
	   
	   if(strcmp(a,b)==0)
	   	cout<<"YES"<<endl;
	   else 
	   	cout<<"NO"<<endl;

	   
	}

	return 0;
}