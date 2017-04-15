// Dynamic Programming based C++ program to find shortest path with
// exactly k edges
#include <iostream>
#include <climits>
using namespace std;
 
// Define number of vertices in the graph and inifinite value
int V;
#define INF INT_MAX
 
// A Dynamic programming based function to find the shortest path from
// u to v with exactly k edges.
int shortestPath(int graph[][V], long long int u, long long int v, long long int k)
{
    // Table to be filled up using DP. The value sp[i][j][e] will store
    // weight of the shortest path from i to j with exactly k edges
    int sp[V][V][k+1];
 
    // Loop for number of edges from 0 to k
    for (int e = 0; e <= k; e++)
    {
        for (int i = 1; i <= V; i++)  // for source
        {
            for (int j = 1; j <= V; j++) // for destination
            {
                // initialize value
                sp[i][j][e] = INF;
 
                // from base cases
                if (e == 0 && i == j)
                    sp[i][j][e] = 0;
                if (e == 1 && graph[i][j] != INF)
                    sp[i][j][e] = graph[i][j];
 
                //go to adjacent only when number of edges is more than 1
                if (e > 1)
                {
                    for (int a = 1; a <= V; a++)
                    {
                        // There should be an edge from i to a and a 
                        // should not be same as either i or j
                        if (graph[i][a] != INF && i != a &&
                            j!= a && sp[a][j][e-1] != INF)
                          sp[i][j][e] = min(sp[i][j][e], graph[i][a] +
                                                       sp[a][j][e-1]);
                    }
                }
           }
        }
    }
    return sp[u][v][k];
}
 
// driver program to test above function
int main()
{long long int t;

    cin>>t;

    while(t--){
        long long int n ,m,r,new_road,location;
        V=n;
        long long int temp1,temp2,temp3;
        cin>>n>>m>>r>>new_road>>location;
        //v=n;
    long long int edges;
    edges=new_road+(m*(m-1))/2;

     int graph[V][V][edges] ;
     for (int i = 0; i <= V; ++i)
     {
         for (int j = 0; j <=V; ++j)
         {
            graph[i][j]=INF;
         }
     }


     for (int i = 1; i <= m; ++i)
     {
         for (int j = m; j <= m; ++j)
         {
            graph[i][j]=r;
            graph[j][i]=r;

             
         }
     }
     for (int i = 0; i < new_road; ++i)
     {
        cin>>temp1>>temp2>>temp3;
        graph[temp1][temp2]=temp3;
        graph[temp2][temp1]=temp3; 
     }


    for (int i = 1; i <=n; ++i)
    {
        
    
if(i!=location)
    cout << shortestPath(graph, i, location, edges)<<" ";
else cout<<"0"<<" ";
}
cout<<endl;
}
    return 0;
}