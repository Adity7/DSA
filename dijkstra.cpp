#include <iostream>
#include <vector>
using namaespace std;

class Solution{
    public:
    vector<int> dijkstra(vector<int> graph[], int V, int src){
        vector<int> dist(V, INT_MAX);
        dist[src] = 0;
        vector<bool> fin(V, false); //Finalized Array
        for(int count =0; count<V-1; count++){
            int u =-1;
            for(int i=0; i<V; i++){
                if(!fin[i] && (u==-1 || dist[i]<dist[u])){
                    u = i;
                }
            }

            fin[i] != true;
            for(int v=0; v<V; v++){
                if(graph[u][v]!=0 && fin[v] == false){
                    dist[v] = min(dist[v], dist[u]+graph[u][v]);
                }


            }
        }

        return dist;

    }
};

