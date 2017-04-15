#include <iostream>
using namespace std;
int main (){

long long int t;
cin>>t;
while(t--){
	long long int l,b,a,d,i;
	cin>>l>>b;
	long long int globmin=100000;
	if(l==b)
		cout<<1<<endl;
	else{
	
	for (i = 2; i < min(l,b); ++i)
	{
		if(l%i==0){
		
			if(b%(l/i)==0){
				a=i;
				
			}
			if(globmin>(l/a)*(b/a))
				globmin=(l/a)*(b/a);
		}
	}
	
	cout<<globmin<<endl;
}

	


}	
return 0;
}