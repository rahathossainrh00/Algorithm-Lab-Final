#include<bits/stdc++.h>
using namespace std;
//int graph[5][5];
int main(){
    vector<vector<int>>graph(5, vector<int>(5,0));
    int node,edge,source,destination;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        cin>>source>>destination;
        graph[source][destination]=1;
        graph[destination][source]=1;
    }
    cout<<"Adjacency matrix: \n";
    for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
    cout<<"Adjacency List: \n";
    for(int i=0;i<node;i++){
        printf("%d ->",i);
        for(int j=0;j<node;j++){
            if(graph[i][j]==1){
                cout<<j<<" ";
            }
        }
        printf("\n");
    }
}
