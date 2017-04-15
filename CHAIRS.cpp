#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n,j=0;
		cin>>n;
		cin.get();
		char a[1000000];
	
	
		cin.getline( a, 1000000 );
		long long int count=0,count1=0;
		int flag=0;
		for (long long  int i = 0; i < n; ++i)
		{
			if(a[i]=='1')
				count1++;
		}
		//cout<<a[0]<<endl;
		long long int minmoves=0;
	long long int startindex=0,minmoves_index=0,end_index=0,minmoves_index_end=0;
	minmoves=-1;
	
	int b[1000000];
	int c[1000000];
	for (long long  int i = 0; i < n; ++i)
	{count=0;
		if(a[i]=='1'){
			startindex=i;
			i++;
			while(a[i]!='1'&&i<n){
			count++;
			i++;
	}
	end_index=i-1;
	if(i==n&&a[n-1]=='0'&&a[0]=='0'){
		end_index=0;
				for (long long  int i = 0; a[i]!='1'; ++i)
				{
					count++;
					end_index++;
				}
				flag=1;
				end_index=end_index+1;

			}
	b[j]=count;
	c[j]=startindex;
	
	if(count>minmoves)
	{
		minmoves=count;
		minmoves_index=startindex;
		minmoves_index_end=end_index;
	}
	j++;
	i--;
	if (flag==1)
		break;
	
		}
	}
	
	for (long long  int i = 0; i < j; ++i)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	cout<<count1<<endl;
	
	cout<<minmoves_index<<" "<<minmoves_index_end<<endl;
	if(minmoves_index_end<minmoves_index){
		for (int i = minmoves_index; i <minmoves_index_end; ++i)
		{
			
		}

	}
	else {

	}



	}
	return 0;
}