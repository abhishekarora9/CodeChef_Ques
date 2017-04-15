#include <iostream>
using namespace std;
int main ()
{
 	long long int t;
 	cin>>t;
 	while(t--){
 
 		long long int m,n;
 		cin>>n>>m;
 		long long int temp;
 		bool arr[100000] = {false};
 		for (int i = 0; i < m; ++i)
 		{
 			cin>>temp;
 			arr[temp]=true;
 
 		}
 		int super[10000],assitant[100000];
 		int flag=0;
 
 		for (int i = 1; i <=n ; ++i)
 		{
 			if(arr[i]==false&&flag==0){
 			arr[i]=true;
 			flag=1;
 			cout<<i<<' ';
 		}
 			else if(arr[i]==false&&flag==1){
 				
 				flag=0;
 			}
 			
 		}
 		
 			
 
 			
 
 		
 		cout<<endl;
 		for (int i = 1; i <= n; ++i)
 		{
 			if(arr[i]==false){
 				cout<<i<<' ';
 			}
 
 		}
 		cout<<endl;
 	}
 
	return 0;
 
} 