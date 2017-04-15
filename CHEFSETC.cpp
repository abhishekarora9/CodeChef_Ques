#include <iostream>
#include <algorithm>
using namespace std;
int main (){
long long int t ;
cin>>t;
while(t--){

	
	long long int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==0||b==0||c==0||d==0)
		cout<<"Yes"<<endl;

	else if(a+b==0)
		cout<<"Yes"<<endl;
	else if(a+c==0)
		cout<<"Yes"<<endl;
	else if(a+d==0)
		cout<<"Yes"<<endl;
	else if(b+c==0)
		cout<<"Yes"<<endl;
	else if(b+d==0)
		cout<<"Yes"<<endl;
	else if(c+d==0)
		cout<<"Yes"<<endl;
	else if(a+b+c==0)
		cout<<"Yes"<<endl;
	else if(a+b+d==0)
		cout<<"Yes"<<endl;
	else if(a+c+d==0)
		cout<<"Yes"<<endl;
	else if(d+b+c==0)
		cout<<"Yes"<<endl;
	else if(a+b+c+d ==0)
		cout<<"Yes"<<endl;

	else cout<<"No"<<endl;

	
	
	


}
	return 0;
}