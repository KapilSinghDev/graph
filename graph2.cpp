#include<bits/stdc++.h>
using namespace std;
// printing the graph using dfs method
void printgraph(vector<int>adj[],int sv , vector<bool>vis){
    cout<<sv;
    vis[sv] = true;
    for(auto x : adj[sv]){
        cout<<"-";
        if(vis[x] == false){
            printgraph(adj,x,vis);
        }
    }
    return;
}
int main(){
    int n,e;
    cout<<"how many nodes and edges you want to enter\n";
    cin>>n>>e;
    cout<<"input your graph\n";
    vector<int>adj[n];
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>vis(n,false);
    cout<<"input of the graph completed";
    printgraph(adj,0,vis);
    return 0;
}