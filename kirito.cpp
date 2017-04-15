#include <iostream>
using namespace std;
int gcd(int n1,int n2){
	n1 = ( n1 > 0) ? n1 : -n1;
    n2 = ( n2 > 0) ? n2 : -n2;

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    return n1;

}

int main()

{
	long long int t;
	cin>>t;
	while(t--){

		long long int n;
		cin>>n;
		int a[100000];
		int b[100000]={0};
		long long int temp;

		long long int count=0;
		for (int i = 1; i <= n; ++i)
		{
			cin>>a[i];

		}
			for (int i = 1; i < n ; ++i)
			{

				
			
			for (int j = i+1; j <= n ; ++j)
			{
				if (count==0)
				{
					temp=a[i];
				}
				
				if(gcd(a[i],a[j])>1 )
				{

					if(b[i]==0)
					
					count++;
				b[i]=1;
				if(b[j]==0)
				count++;
				b[j]=1;
				
				temp=a[j];

			
			


					cout << "("<<a[i]<<","<<a[j]<<")"<<endl;
					break;
					
					
				}

			}
			

	
		}
	


		cout <<count<<endl;



	





	}
	return 0;
}