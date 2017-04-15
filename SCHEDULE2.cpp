#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, kcount;
        cin >> n >> kcount;
        cin.get();
        char a[1000000];
        int c[100000];
        for (long long int i = 0; i < n; ++i) {
            a[i] = cin.get();
        }
        int b[100000];
        long long int count = 0, j = 0;
        for (long long int i = 0; i < n; ++i) {
            count = 0;
            c[j] = i;
            if (a[i] == '0') {
                while (a[i] == '0') {
                    count++;
                    i++;
                }
            }
            else {
                while (a[i] == '1') {
                    count++;
                    i++;
                }
            }
            b[j] = count;

            j++;
            i--;
        }
        long long int inital_size = c[j-1];
        long long int maxblock = -10, max_index = 0;

        for (int k = 0; k < kcount; ++k) {
        	
            

        	maxblock=-1;
            for (int i = 0; i < j; ++i) {
                if (b[i] > maxblock) {
                    maxblock = b[i];
                    max_index = i;
                }
            }
            //cout<<"Max Block"<<maxblock<<" "<<"Max Index"<<max_index<<endl;
           // cout<<inital_size<<endl;
            
                if (maxblock== 1) {
                    continue;
                }
                if (maxblock == 2) {
                	if(max_index==0){
                		b[max_index]--;
                		continue;

                	}
                	if (c[max_index]==inital_size)
                	{
                		b[max_index]--;
                		continue;
                		
                	}
                	if(kcount-k>=2)
                	{
                		b[max_index]--;
                		k++;
                		continue;
                	}
                	else continue;
                	

                    
                    
                }
                if (maxblock % 2 == 0) {
                	if(max_index==0){
                		b[max_index]=maxblock/2-1;
                		b[j]=maxblock/2;
                		c[j]=-1;
                		j++;
                		continue;


                	}
                	if (c[max_index]==inital_size)
                	{
                		b[max_index]=maxblock/2;
                		b[j]=maxblock/2-1;
                		c[j]=-1;
                		j++;
                		continue;

                		
                	}
                	
                    b[max_index]=maxblock/2-1;
                		b[j]=maxblock/2;
                		c[j]=-1;
                		j++;
                		continue;
                    
                }
                if (maxblock % 2 == 1) {
                	b[max_index]=maxblock/2;
                	b[j]=maxblock/2;
                		c[j]=-1;
                		j++;

                    continue;
                }
                
           



        }
        
            
        maxblock=-1;
        for (int i = 0; i < j; ++i) {
                if (b[i] > maxblock) {
                    maxblock = b[i];
                    max_index = c[i];
                }
            }
            cout<<maxblock<<endl;
    }

    return 0;
}