#include <bits/stdc++.h>
using namespace std;
void  dfs(vector<vector<int>> edges , int node , vector<bool> &visited,vector<int>&ans){
    visited[node] = true;
    ans.push_back(node);
    for(auto child : edges[node]){
        if(!visited[child]){
            dfs(edges , child , visited , ans);
        }
    }
}
int main() {
    int n;
    cin>>n;
    vector<vector<int>> edges(n+1);
    int e;cin>>e;
    for(int i = 0 ; i < e ;i++){
        int u , v ; 
        cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    vector<bool> visited(n+1);
    vector<int> ans;
    dfs(edges , 2 , visited , ans);
    for(auto i : ans)cout<<i<<" ";
    return 0;
}
