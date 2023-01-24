#include<bits/stdc++.h>
using namespace std;
void print(int **graph , bool *vis , int sv, int n){
    queue<int>q;
    q.push(sv);
    vis[sv] = true;
    while(!q.empty()){
        int ft = q.front();
        cout<<ft<<"-";
        q.pop();
        for(int i=0;i<n;i++){
            if(vis[i] == false && graph[ft][i] == 1){
                q.push(i);
                vis[i] = true;
            }
        }
    }
    return;

}
int main(){
    // representation of graph in adjacency matrix way
    cout<<"how many node and edges you want to enter\n";
    int n = 0 , e = 0; // number of nodes
    cin>>n>>e;
    int **graph = new int*[n];
    // marking all intitial values as  0;
    for(int i=0;i<n;i++){
        graph[i] = new int[n];
        for(int j=0;j<n;j++){
            graph[i][j] = 0;
        }
    }
 // taking inputs for the graph; 
    cout<<"input your graph\n";   
    for(int i=0;i<e;i++){
        int u = 0,v = 0;
        cin>>u>>v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    bool *vis = new bool[n];
    for(int i =0;i<n;i++){
        vis[i] = false;
    }
    cout<<"the graph that you made is = ";
    print(graph,vis,0,n);
    return  0;
}