#include <iostream>
using namespace std;
int lcm(int n1,int n2){
	 int  minMultiple;
    
    minMultiple = (n1>n2) ? n1 : n2;

    
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            
            break;
        }
        ++minMultiple;
    }
    return minMultiple;
}
int main ()
{
	long long int t;
	cin>>t;
	while(t--){

		long long int n;
		cin>>n;
		int arr[100000];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		long long int temp=999999;
		for (int i = 0; i < n-1; ++i)
		{
			for (int j = i+1; j < n-1; ++j)
			{
				if(lcm (arr[i],arr[j])<temp)
					temp=lcm(arr[i],arr[j]);
			}
		}
		cout<<temp<<endl;
		cout<<lcm(4,6)<<endl;


		

	}
	return 0;
}