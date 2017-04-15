#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
int main ()

{
	long long int t;
	cin>>t;
	while(t--){

	   char str[100000];
	   long long int i=0;
	   char x = 0;
	   cin.get();
	   
	   while(x!='\n'){
	   	x = cin.get();
	   	str[i]=x;
	   	i++;


	   }
	   str[i-1]='\0';
	   //cout<<str[i];
     
    
	   char *ptr_start;
	   char *ptr_end;
	   ptr_start=str;
	   ptr_end=str;

	   while(*ptr_end!='\0'){

	   	ptr_end++;

	   }
	   ptr_end--;
	   int flag;

	   while(ptr_start<ptr_end){
	   	flag=0;
	   	if(*ptr_start==*ptr_end){
	   		ptr_start++;
	   		ptr_end--;
	   		continue;
	   	}
	   	else {
	   		flag=1;
	   		break;
	   	}

	   }
	   if (flag==1)
	   	cout<<"NO"<<endl;
	   else cout<<"YES"<<endl;

	}

	return 0;
}